// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#include "NativeShaderFactoryInterface.h"  // my header
#include "NativeAlphaInstancedShaderInterface.h"
#include "NativeAlphaShaderInterface.h"
#include "NativeColorCircleShaderInterface.h"
#include "NativeColorShaderInterface.h"
#include "NativeLineGroupShaderInterface.h"
#include "NativePolygonGroupShaderInterface.h"
#include "NativePolygonPatternGroupShaderInterface.h"
#include "NativeRasterShaderInterface.h"
#include "NativeStretchInstancedShaderInterface.h"
#include "NativeStretchShaderInterface.h"
#include "NativeTextInstancedShaderInterface.h"
#include "NativeTextShaderInterface.h"

namespace djinni_generated {

NativeShaderFactoryInterface::NativeShaderFactoryInterface() : ::djinni::JniInterface<::ShaderFactoryInterface, NativeShaderFactoryInterface>("io/openmobilemaps/mapscore/shared/graphics/shader/ShaderFactoryInterface$CppProxy") {}

NativeShaderFactoryInterface::~NativeShaderFactoryInterface() = default;

NativeShaderFactoryInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeShaderFactoryInterface::JavaProxy::~JavaProxy() = default;

/*not-null*/ std::shared_ptr<::AlphaShaderInterface> NativeShaderFactoryInterface::JavaProxy::createAlphaShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createAlphaShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeAlphaShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::AlphaInstancedShaderInterface> NativeShaderFactoryInterface::JavaProxy::createAlphaInstancedShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createAlphaInstancedShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeAlphaInstancedShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::LineGroupShaderInterface> NativeShaderFactoryInterface::JavaProxy::createLineGroupShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createLineGroupShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeLineGroupShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::ColorShaderInterface> NativeShaderFactoryInterface::JavaProxy::createColorShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createColorShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeColorShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::ColorCircleShaderInterface> NativeShaderFactoryInterface::JavaProxy::createColorCircleShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createColorCircleShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeColorCircleShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::PolygonGroupShaderInterface> NativeShaderFactoryInterface::JavaProxy::createPolygonGroupShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createPolygonGroupShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativePolygonGroupShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::PolygonPatternGroupShaderInterface> NativeShaderFactoryInterface::JavaProxy::createPolygonPatternGroupShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createPolygonPatternGroupShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativePolygonPatternGroupShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::TextShaderInterface> NativeShaderFactoryInterface::JavaProxy::createTextShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createTextShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeTextShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::TextInstancedShaderInterface> NativeShaderFactoryInterface::JavaProxy::createTextInstancedShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createTextInstancedShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeTextInstancedShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::RasterShaderInterface> NativeShaderFactoryInterface::JavaProxy::createRasterShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createRasterShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeRasterShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::StretchShaderInterface> NativeShaderFactoryInterface::JavaProxy::createStretchShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createStretchShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeStretchShaderInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::StretchInstancedShaderInterface> NativeShaderFactoryInterface::JavaProxy::createStretchInstancedShader() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeShaderFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createStretchInstancedShader);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeStretchInstancedShaderInterface::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::ShaderFactoryInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createAlphaShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createAlphaShader();
        return ::djinni::release(::djinni_generated::NativeAlphaShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createAlphaInstancedShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createAlphaInstancedShader();
        return ::djinni::release(::djinni_generated::NativeAlphaInstancedShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createLineGroupShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createLineGroupShader();
        return ::djinni::release(::djinni_generated::NativeLineGroupShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createColorShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createColorShader();
        return ::djinni::release(::djinni_generated::NativeColorShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createColorCircleShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createColorCircleShader();
        return ::djinni::release(::djinni_generated::NativeColorCircleShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createPolygonGroupShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createPolygonGroupShader();
        return ::djinni::release(::djinni_generated::NativePolygonGroupShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createPolygonPatternGroupShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createPolygonPatternGroupShader();
        return ::djinni::release(::djinni_generated::NativePolygonPatternGroupShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createTextShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createTextShader();
        return ::djinni::release(::djinni_generated::NativeTextShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createTextInstancedShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createTextInstancedShader();
        return ::djinni::release(::djinni_generated::NativeTextInstancedShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createRasterShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createRasterShader();
        return ::djinni::release(::djinni_generated::NativeRasterShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createStretchShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createStretchShader();
        return ::djinni::release(::djinni_generated::NativeStretchShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ShaderFactoryInterface_00024CppProxy_native_1createStretchInstancedShader(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ShaderFactoryInterface>(nativeRef);
        auto r = ref->createStretchInstancedShader();
        return ::djinni::release(::djinni_generated::NativeStretchInstancedShaderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
