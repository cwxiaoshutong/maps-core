// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#include "NativeStretchInstancedShaderInterface.h"  // my header
#include "NativeShaderProgramInterface.h"

namespace djinni_generated {

NativeStretchInstancedShaderInterface::NativeStretchInstancedShaderInterface() : ::djinni::JniInterface<::StretchInstancedShaderInterface, NativeStretchInstancedShaderInterface>("io/openmobilemaps/mapscore/shared/graphics/shader/StretchInstancedShaderInterface$CppProxy") {}

NativeStretchInstancedShaderInterface::~NativeStretchInstancedShaderInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_StretchInstancedShaderInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::StretchInstancedShaderInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_StretchInstancedShaderInterface_00024CppProxy_native_1asShaderProgramInterface(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::StretchInstancedShaderInterface>(nativeRef);
        auto r = ref->asShaderProgramInterface();
        return ::djinni::release(::djinni_generated::NativeShaderProgramInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
