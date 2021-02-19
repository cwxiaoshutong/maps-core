// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#pragma once

#include "GraphicsObjectFactoryInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeGraphicsObjectFactoryInterface final : ::djinni::JniInterface<::GraphicsObjectFactoryInterface, NativeGraphicsObjectFactoryInterface> {
public:
    using CppType = std::shared_ptr<::GraphicsObjectFactoryInterface>;
    using CppOptType = std::shared_ptr<::GraphicsObjectFactoryInterface>;
    using JniType = jobject;

    using Boxed = NativeGraphicsObjectFactoryInterface;

    ~NativeGraphicsObjectFactoryInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeGraphicsObjectFactoryInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeGraphicsObjectFactoryInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeGraphicsObjectFactoryInterface();
    friend ::djinni::JniClass<NativeGraphicsObjectFactoryInterface>;
    friend ::djinni::JniInterface<::GraphicsObjectFactoryInterface, NativeGraphicsObjectFactoryInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::GraphicsObjectFactoryInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::shared_ptr<::Rectangle2dInterface> createRectangle(const std::shared_ptr<::ShaderProgramInterface> & shader) override;
        std::shared_ptr<::Line2dInterface> createLine(const std::shared_ptr<::LineShaderProgramInterface> & lineShader) override;
        std::shared_ptr<::Polygon2dInterface> createPolygon(const std::shared_ptr<::ShaderProgramInterface> & shader) override;

    private:
        friend ::djinni::JniInterface<::GraphicsObjectFactoryInterface, ::djinni_generated::NativeGraphicsObjectFactoryInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("ch/ubique/mapscore/shared/graphics/objects/GraphicsObjectFactoryInterface") };
    const jmethodID method_createRectangle { ::djinni::jniGetMethodID(clazz.get(), "createRectangle", "(Lch/ubique/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lch/ubique/mapscore/shared/graphics/objects/Rectangle2dInterface;") };
    const jmethodID method_createLine { ::djinni::jniGetMethodID(clazz.get(), "createLine", "(Lch/ubique/mapscore/shared/graphics/shader/LineShaderProgramInterface;)Lch/ubique/mapscore/shared/graphics/objects/Line2dInterface;") };
    const jmethodID method_createPolygon { ::djinni::jniGetMethodID(clazz.get(), "createPolygon", "(Lch/ubique/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lch/ubique/mapscore/shared/graphics/objects/Polygon2dInterface;") };
};

}  // namespace djinni_generated