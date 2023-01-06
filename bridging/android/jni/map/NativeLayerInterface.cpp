// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#include "NativeLayerInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeErrorManager.h"
#include "NativeLayerReadyState.h"
#include "NativeMapInterface.h"
#include "NativeMaskingObjectInterface.h"
#include "NativeRectI.h"
#include "NativeRenderPassInterface.h"

namespace djinni_generated {

NativeLayerInterface::NativeLayerInterface() : ::djinni::JniInterface<::LayerInterface, NativeLayerInterface>("io/openmobilemaps/mapscore/shared/map/LayerInterface$CppProxy") {}

NativeLayerInterface::~NativeLayerInterface() = default;

NativeLayerInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeLayerInterface::JavaProxy::~JavaProxy() = default;

void NativeLayerInterface::JavaProxy::setMaskingObject(const std::shared_ptr<::MaskingObjectInterface> & c_maskingObject) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setMaskingObject,
                           ::djinni::get(::djinni::Optional<std::optional, ::djinni_generated::NativeMaskingObjectInterface>::fromCpp(jniEnv, c_maskingObject)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::update() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_update);
    ::djinni::jniExceptionCheck(jniEnv);
}
std::vector<std::shared_ptr<::RenderPassInterface>> NativeLayerInterface::JavaProxy::buildRenderPasses() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_buildRenderPasses);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::List<::djinni_generated::NativeRenderPassInterface>::toCpp(jniEnv, jret);
}
void NativeLayerInterface::JavaProxy::onAdded(const std::shared_ptr<::MapInterface> & c_mapInterface, int32_t c_layerIndex) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onAdded,
                           ::djinni::get(::djinni_generated::NativeMapInterface::fromCpp(jniEnv, c_mapInterface)),
                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_layerIndex)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::onRemoved() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onRemoved);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::pause() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_pause);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::resume() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_resume);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::hide() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_hide);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::show() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_show);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::setAlpha(float c_alpha) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setAlpha,
                           ::djinni::get(::djinni::F32::fromCpp(jniEnv, c_alpha)));
    ::djinni::jniExceptionCheck(jniEnv);
}
float NativeLayerInterface::JavaProxy::getAlpha() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    auto jret = jniEnv->CallFloatMethod(Handle::get().get(), data.method_getAlpha);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::F32::toCpp(jniEnv, jret);
}
void NativeLayerInterface::JavaProxy::setScissorRect(const std::optional<::RectI> & c_scissorRect) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setScissorRect,
                           ::djinni::get(::djinni::Optional<std::optional, ::djinni_generated::NativeRectI>::fromCpp(jniEnv, c_scissorRect)));
    ::djinni::jniExceptionCheck(jniEnv);
}
::LayerReadyState NativeLayerInterface::JavaProxy::isReadyToRenderOffscreen() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_isReadyToRenderOffscreen);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeLayerReadyState::toCpp(jniEnv, jret);
}
void NativeLayerInterface::JavaProxy::enableAnimations(bool c_enabled) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_enableAnimations,
                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c_enabled)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::setErrorManager(const std::shared_ptr<::ErrorManager> & c_errorManager) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setErrorManager,
                           ::djinni::get(::djinni_generated::NativeErrorManager::fromCpp(jniEnv, c_errorManager)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::forceReload() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_forceReload);
    ::djinni::jniExceptionCheck(jniEnv);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::LayerInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1setMaskingObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeMaskingObjectInterface::Boxed::JniType j_maskingObject)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->setMaskingObject(::djinni::Optional<std::optional, ::djinni_generated::NativeMaskingObjectInterface>::toCpp(jniEnv, j_maskingObject));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1update(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->update();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1buildRenderPasses(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        auto r = ref->buildRenderPasses();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeRenderPassInterface>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1onAdded(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_mapInterface, jint j_layerIndex)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->onAdded(::djinni_generated::NativeMapInterface::toCpp(jniEnv, j_mapInterface),
                     ::djinni::I32::toCpp(jniEnv, j_layerIndex));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1onRemoved(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->onRemoved();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1pause(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->pause();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1resume(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->resume();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1hide(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->hide();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1show(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->show();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1setAlpha(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_alpha)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->setAlpha(::djinni::F32::toCpp(jniEnv, j_alpha));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jfloat JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1getAlpha(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        auto r = ref->getAlpha();
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1setScissorRect(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRectI::Boxed::JniType j_scissorRect)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->setScissorRect(::djinni::Optional<std::optional, ::djinni_generated::NativeRectI>::toCpp(jniEnv, j_scissorRect));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1isReadyToRenderOffscreen(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        auto r = ref->isReadyToRenderOffscreen();
        return ::djinni::release(::djinni_generated::NativeLayerReadyState::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1enableAnimations(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_enabled)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->enableAnimations(::djinni::Bool::toCpp(jniEnv, j_enabled));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1setErrorManager(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeErrorManager::JniType j_errorManager)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->setErrorManager(::djinni_generated::NativeErrorManager::toCpp(jniEnv, j_errorManager));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1forceReload(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->forceReload();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
