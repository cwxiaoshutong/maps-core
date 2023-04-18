// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#pragma once

#include "Color.h"
#include <memory>

class ShaderProgramInterface;

class TextShaderInterface {
public:
    virtual ~TextShaderInterface() = default;

    virtual void setColor(const ::Color & color) = 0;

    virtual void setOpacity(float opacity) = 0;

    virtual void setHaloColor(const ::Color & color) = 0;

    virtual /*not-null*/ std::shared_ptr<ShaderProgramInterface> asShaderProgramInterface() = 0;
};
