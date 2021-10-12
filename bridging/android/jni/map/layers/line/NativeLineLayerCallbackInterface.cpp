// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from line.djinni

#include "NativeLineLayerCallbackInterface.h"  // my header
#include "NativeLineInfoInterface.h"

namespace djinni_generated {

NativeLineLayerCallbackInterface::NativeLineLayerCallbackInterface() : ::djinni::JniInterface<::LineLayerCallbackInterface, NativeLineLayerCallbackInterface>("io/openmobilemaps/mapscore/shared/map/layers/line/LineLayerCallbackInterface$CppProxy") {}

NativeLineLayerCallbackInterface::~NativeLineLayerCallbackInterface() = default;

NativeLineLayerCallbackInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeLineLayerCallbackInterface::JavaProxy::~JavaProxy() = default;

void NativeLineLayerCallbackInterface::JavaProxy::onLineClickConfirmed(const std::shared_ptr<::LineInfoInterface> & c_line) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLineLayerCallbackInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onLineClickConfirmed,
                           ::djinni::get(::djinni_generated::NativeLineInfoInterface::fromCpp(jniEnv, c_line)));
    ::djinni::jniExceptionCheck(jniEnv);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_line_LineLayerCallbackInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::LineLayerCallbackInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_line_LineLayerCallbackInterface_00024CppProxy_native_1onLineClickConfirmed(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_line)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LineLayerCallbackInterface>(nativeRef);
        ref->onLineClickConfirmed(::djinni_generated::NativeLineInfoInterface::toCpp(jniEnv, j_line));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated