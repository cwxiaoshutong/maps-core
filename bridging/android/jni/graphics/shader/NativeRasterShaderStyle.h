// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#pragma once

#include "RasterShaderStyle.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeRasterShaderStyle final {
public:
    using CppType = ::RasterShaderStyle;
    using JniType = jobject;

    using Boxed = NativeRasterShaderStyle;

    ~NativeRasterShaderStyle();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeRasterShaderStyle();
    friend ::djinni::JniClass<NativeRasterShaderStyle>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/shader/RasterShaderStyle") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(FFFFFF)V") };
    const jfieldID field_opacity { ::djinni::jniGetFieldID(clazz.get(), "opacity", "F") };
    const jfieldID field_brightnessMin { ::djinni::jniGetFieldID(clazz.get(), "brightnessMin", "F") };
    const jfieldID field_brightnessMax { ::djinni::jniGetFieldID(clazz.get(), "brightnessMax", "F") };
    const jfieldID field_contrast { ::djinni::jniGetFieldID(clazz.get(), "contrast", "F") };
    const jfieldID field_saturation { ::djinni::jniGetFieldID(clazz.get(), "saturation", "F") };
    const jfieldID field_gamma { ::djinni::jniGetFieldID(clazz.get(), "gamma", "F") };
};

} // namespace djinni_generated
