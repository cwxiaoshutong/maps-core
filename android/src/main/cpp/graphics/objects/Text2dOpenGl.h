/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#pragma once

#include "GraphicsObjectInterface.h"
#include "MaskingObjectInterface.h"
#include "OpenGlContext.h"
#include "TextInterface.h"
#include "ShaderProgramInterface.h"
#include "TextDescription.h"
#include "GlyphDescription.h"
#include "opengl_wrapper.h"
#include <vector>

class Text2dOpenGl : public GraphicsObjectInterface,
                     public MaskingObjectInterface,
                     public TextInterface,
                     public std::enable_shared_from_this<Text2dOpenGl> {
  public:
    Text2dOpenGl(const std::shared_ptr<::ShaderProgramInterface> &shader);

    ~Text2dOpenGl(){};

    virtual bool isReady() override;

    virtual void setup(const std::shared_ptr<::RenderingContextInterface> &context) override;

    virtual void clear() override;

    virtual void renderAsMask(const std::shared_ptr<::RenderingContextInterface> & context, const ::RenderPassConfig & renderPass, int64_t mvpMatrix, double screenPixelAsRealMeterFactor) override;

    virtual void render(const std::shared_ptr<::RenderingContextInterface> &context, const ::RenderPassConfig &renderPass,
                        int64_t mvpMatrix, bool isMasked, double screenPixelAsRealMeterFactor) override;

    virtual void setTexts(const std::vector<TextDescription> & texts) override;

    virtual void loadTexture(const std::shared_ptr<TextureHolderInterface> &textureHolder) override;

    virtual void removeTexture() override;

    virtual std::shared_ptr<GraphicsObjectInterface> asGraphicsObject() override;

  protected:
    virtual void adjustTextureCoordinates();

    virtual void prepareTextureDraw(std::shared_ptr<OpenGlContext> &openGLContext, int mProgram);

    void prepareGlData(const std::shared_ptr<OpenGlContext> &openGlContext);

    void removeGlBuffers();

    std::shared_ptr<ShaderProgramInterface> shaderProgram;

    int mvpMatrixHandle;
    int positionHandle;
    GLuint vertexBuffer;
    std::vector<GLfloat> vertices;
    int textureCoordinateHandle;
    GLuint textureCoordsBuffer;
    std::vector<GLfloat> textureCoords;
    GLuint indexBuffer;
    std::vector<GLubyte> indices;
    std::vector<GLuint> texturePointer = {0};
    bool textureLoaded = false;

    std::vector<GlyphDescription> glyphDescriptions;
    double factorHeight = 1.0;
    double factorWidth = 1.0;

    bool ready = false;
    bool dataReady = false;
};