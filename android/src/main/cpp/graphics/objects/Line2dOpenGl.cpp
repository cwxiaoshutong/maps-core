/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#include "Line2dOpenGl.h"
#include <cmath>

Line2dOpenGl::Line2dOpenGl(const std::shared_ptr<::ShaderProgramInterface> &shader)
    : shaderProgram(shader) {}

std::shared_ptr<GraphicsObjectInterface> Line2dOpenGl::asGraphicsObject() { return shared_from_this(); }

bool Line2dOpenGl::isReady() { return ready; }

void Line2dOpenGl::setLinePositions(const std::vector<::Vec2D> &positions) {
    std::lock_guard<std::recursive_mutex> lock(dataMutex);
    ready = false;
    lineCoordinates = positions;
    initializeLineAndPoints();
}

void Line2dOpenGl::setup(const std::shared_ptr<::RenderingContextInterface> &context) {
    std::lock_guard<std::recursive_mutex> lock(dataMutex);
    if (ready)
        return;

    std::shared_ptr<OpenGlContext> openGlContext = std::static_pointer_cast<OpenGlContext>(context);
    if (openGlContext->getProgram(shaderProgram->getProgramName()) == 0) {
        shaderProgram->setupProgram(openGlContext);
    }
    prepareGlData(openGlContext);
    ready = true;
}

void Line2dOpenGl::initializeLineAndPoints() {
    int pointCount = (int)lineCoordinates.size();
    int iSecondToLast = pointCount - 2;

    float prefixTotalLineLength = 0.0;

    for (int i = 0; i < (pointCount - 1); i++) {
        const Vec2D &p = lineCoordinates[i];
        const Vec2D &pNext = lineCoordinates[i + 1];

        float lengthNormalX = pNext.x - p.x;
        float lengthNormalY = pNext.y - p.y;
        float lineLength = std::sqrt(lengthNormalX * lengthNormalX + lengthNormalY * lengthNormalY);
        lengthNormalX = lengthNormalX / lineLength;
        lengthNormalY = lengthNormalY / lineLength;
        float widthNormalX = -lengthNormalY;
        float widthNormalY = lengthNormalX;

        // SegmentType (0 inner, 1 start, 2 end, 3 single segment)
        float lineStyleInfo = (i == 0 && i == iSecondToLast ? 3.0f
                                  : (i == 0 ? 1.0f
                                  : (i == iSecondToLast ? 2.0f
                                  : 0.0f)));

        // Vertex 1
        // Position
        lineAttributes.push_back(p.x);
        lineAttributes.push_back(p.y);
        lineAttributes.push_back(0.0);

        // Width normal
        lineAttributes.push_back(-widthNormalX);
        lineAttributes.push_back(-widthNormalY);
        lineAttributes.push_back(0.0);

        // Length normal
        lineAttributes.push_back(-lengthNormalX);
        lineAttributes.push_back(-lengthNormalY);
        lineAttributes.push_back(0.0);

        // Position pointA and pointB
        lineAttributes.push_back(p.x);
        lineAttributes.push_back(p.y);
        lineAttributes.push_back(0.0);
        lineAttributes.push_back(pNext.x);
        lineAttributes.push_back(pNext.y);
        lineAttributes.push_back(0.0);

        // Segment Start Length Position (length prefix sum)
        lineAttributes.push_back(prefixTotalLineLength);

        // Style Info
        lineAttributes.push_back(lineStyleInfo);

        // Vertex 2
        lineAttributes.push_back(p.x);
        lineAttributes.push_back(p.y);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(widthNormalX);
        lineAttributes.push_back(widthNormalY);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(-lengthNormalX);
        lineAttributes.push_back(-lengthNormalY);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(p.x);
        lineAttributes.push_back(p.y);
        lineAttributes.push_back(0.0);
        lineAttributes.push_back(pNext.x);
        lineAttributes.push_back(pNext.y);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(prefixTotalLineLength);

        lineAttributes.push_back(lineStyleInfo);

        // Vertex 3
        lineAttributes.push_back(pNext.x);
        lineAttributes.push_back(pNext.y);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(widthNormalX);
        lineAttributes.push_back(widthNormalY);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(lengthNormalX);
        lineAttributes.push_back(lengthNormalY);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(p.x);
        lineAttributes.push_back(p.y);
        lineAttributes.push_back(0.0);
        lineAttributes.push_back(pNext.x);
        lineAttributes.push_back(pNext.y);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(prefixTotalLineLength);

        lineAttributes.push_back(lineStyleInfo);

        // Vertex 4
        lineAttributes.push_back(pNext.x);
        lineAttributes.push_back(pNext.y);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(-widthNormalX);
        lineAttributes.push_back(-widthNormalY);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(lengthNormalX);
        lineAttributes.push_back(lengthNormalY);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(p.x);
        lineAttributes.push_back(p.y);
        lineAttributes.push_back(0.0);
        lineAttributes.push_back(pNext.x);
        lineAttributes.push_back(pNext.y);
        lineAttributes.push_back(0.0);

        lineAttributes.push_back(prefixTotalLineLength);

        lineAttributes.push_back(lineStyleInfo);

        // Vertex indices
        lineIndices.push_back(4 * i);
        lineIndices.push_back(4 * i + 1);
        lineIndices.push_back(4 * i + 2);

        lineIndices.push_back(4 * i);
        lineIndices.push_back(4 * i + 2);
        lineIndices.push_back(4 * i + 3);

        prefixTotalLineLength += lineLength;
    }

}

void Line2dOpenGl::prepareGlData(std::shared_ptr<OpenGlContext> openGlContext) {
    int program = openGlContext->getProgram(shaderProgram->getProgramName());
    glUseProgram(program);

    positionHandle = glGetAttribLocation(program, "vPosition");
    widthNormalHandle = glGetAttribLocation(program, "vWidthNormal");
    lengthNormalHandle = glGetAttribLocation(program, "vLengthNormal");
    pointAHandle = glGetAttribLocation(program, "vPointA");
    pointBHandle = glGetAttribLocation(program, "vPointB");
    segmentStartLPosHandle = glGetAttribLocation(program, "vSegmentStartLPos");
    styleInfoHandle = glGetAttribLocation(program, "vStyleInfo");

    glGenBuffers(1, &vertexAttribBuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexAttribBuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat) * lineAttributes.size(), &lineAttributes[0], GL_STATIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glGenBuffers(1, &indexBuffer);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(GLuint) * lineIndices.size(), &lineIndices[0], GL_STATIC_DRAW);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

    mvpMatrixHandle = glGetUniformLocation(program, "uMVPMatrix");
    scaleFactorHandle = glGetUniformLocation(program, "scaleFactor");
}

void Line2dOpenGl::clear() {
    std::lock_guard<std::recursive_mutex> lock(dataMutex);
    ready = false;
    removeGlBuffers();
}

void Line2dOpenGl::setIsInverseMasked(bool inversed) { isMaskInversed = inversed; }

void Line2dOpenGl::removeGlBuffers() {
    glDeleteBuffers(1, &vertexAttribBuffer);
    glDeleteBuffers(1, &indexBuffer);
}

void Line2dOpenGl::render(const std::shared_ptr<::RenderingContextInterface> &context, const RenderPassConfig &renderPass,
                          int64_t mvpMatrix, bool isMasked, double screenPixelAsRealMeterFactor) {
    if (!ready)
        return;

    std::shared_ptr<OpenGlContext> openGlContext = std::static_pointer_cast<OpenGlContext>(context);

    if (isMasked) {
        if (isMaskInversed) {
            glStencilFunc(GL_EQUAL, 0, 255);
        } else {
            glStencilFunc(GL_EQUAL, 128, 255);
        }
    } else {
        glEnable(GL_STENCIL_TEST);
        glStencilMask(0xFF);
        glClearStencil(0x0);
        glClear(GL_STENCIL_BUFFER_BIT);
        glStencilFunc(GL_NOTEQUAL, 0x1, 0xFF);
    }
    glStencilOp(GL_KEEP, GL_KEEP, GL_INCR);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);

    drawLineSegments(openGlContext, mvpMatrix, screenPixelAsRealMeterFactor);

    glDisable(GL_STENCIL_TEST);
}

void Line2dOpenGl::drawLineSegments(std::shared_ptr<OpenGlContext> openGlContext, int64_t mvpMatrix, float widthScaleFactor) {
    // Add program to OpenGL environment
    int program = openGlContext->getProgram(shaderProgram->getProgramName());
    glUseProgram(program);

    // Apply the projection and view transformation
    glUniformMatrix4fv(mvpMatrixHandle, 1, false, (GLfloat *)mvpMatrix);
    glUniform1f(scaleFactorHandle, widthScaleFactor);

    glEnable(GL_BLEND);
    glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_ALPHA);

    shaderProgram->preRender(openGlContext);

    // Prepare the vertex attributes
    size_t floatSize = sizeof(GLfloat);
    size_t sizeAttribGroup = floatSize * 3;
    size_t stride = sizeAttribGroup * 5 + 2 * floatSize;
    glBindBuffer(GL_ARRAY_BUFFER, vertexAttribBuffer);
    glEnableVertexAttribArray(positionHandle);
    glVertexAttribPointer(positionHandle, 3, GL_FLOAT, false, stride, nullptr);
    glEnableVertexAttribArray(widthNormalHandle);
    glVertexAttribPointer(widthNormalHandle, 3, GL_FLOAT, false, stride, (float *)sizeAttribGroup);
    glEnableVertexAttribArray(lengthNormalHandle);
    glVertexAttribPointer(lengthNormalHandle, 3, GL_FLOAT, false, stride, (float *)(sizeAttribGroup * 2));
    glEnableVertexAttribArray(pointAHandle);
    glVertexAttribPointer(pointAHandle, 3, GL_FLOAT, false, stride, (float *)(sizeAttribGroup * 3));
    glEnableVertexAttribArray(pointBHandle);
    glVertexAttribPointer(pointBHandle, 3, GL_FLOAT, false, stride, (float *)(sizeAttribGroup * 4));
    glEnableVertexAttribArray(segmentStartLPosHandle);
    glVertexAttribPointer(segmentStartLPosHandle, 1, GL_FLOAT, false, stride, (float *)(sizeAttribGroup * 5));
    glEnableVertexAttribArray(styleInfoHandle);
    glVertexAttribPointer(styleInfoHandle, 1, GL_FLOAT, false, stride, (float *)(sizeAttribGroup * 5 + floatSize));
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    // Draw the triangle
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);
    glDrawElements(GL_TRIANGLES, lineIndices.size(), GL_UNSIGNED_INT, nullptr);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

    // Disable vertex array
    glDisableVertexAttribArray(positionHandle);
    glDisableVertexAttribArray(widthNormalHandle);
    glDisableVertexAttribArray(lengthNormalHandle);
    glDisableVertexAttribArray(pointAHandle);
    glDisableVertexAttribArray(pointBHandle);
    glDisableVertexAttribArray(segmentStartLPosHandle);
    glDisableVertexAttribArray(styleInfoHandle);

    glDisable(GL_BLEND);
}
