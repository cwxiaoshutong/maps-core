// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

#include "NativeWmtsCapabilitiesResource.h"  // my header
#include "Marshal.hpp"
#include "NativeLoaderInterface.h"
#include "NativeTiled2dMapLayerConfig.h"
#include "NativeTiled2dMapRasterLayerInterface.h"
#include "NativeTiled2dMapZoomInfo.h"
#include "NativeWmtsLayerDescription.h"

namespace djinni_generated {

NativeWmtsCapabilitiesResource::NativeWmtsCapabilitiesResource() : ::djinni::JniInterface<::WmtsCapabilitiesResource, NativeWmtsCapabilitiesResource>("io/openmobilemaps/mapscore/shared/map/layers/tiled/raster/wmts/WmtsCapabilitiesResource$CppProxy") {}

NativeWmtsCapabilitiesResource::~NativeWmtsCapabilitiesResource() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_wmts_WmtsCapabilitiesResource_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::WmtsCapabilitiesResource>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_wmts_WmtsCapabilitiesResource_00024CppProxy_create(JNIEnv* jniEnv, jobject /*this*/, jstring j_xml)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::WmtsCapabilitiesResource::create(::djinni::String::toCpp(jniEnv, j_xml));
        return ::djinni::release(::djinni_generated::NativeWmtsCapabilitiesResource::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeTiled2dMapRasterLayerInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_wmts_WmtsCapabilitiesResource_00024CppProxy_native_1createLayer(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_identifier, jobject j_tileLoaders)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::WmtsCapabilitiesResource>(nativeRef);
        auto r = ref->createLayer(::djinni::String::toCpp(jniEnv, j_identifier),
                                  ::djinni::List<::djinni_generated::NativeLoaderInterface>::toCpp(jniEnv, j_tileLoaders));
        return ::djinni::release(::djinni_generated::NativeTiled2dMapRasterLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeTiled2dMapRasterLayerInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_wmts_WmtsCapabilitiesResource_00024CppProxy_native_1createLayerWithZoomInfo(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_identifier, jobject j_tileLoaders, ::djinni_generated::NativeTiled2dMapZoomInfo::JniType j_zoomInfo)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::WmtsCapabilitiesResource>(nativeRef);
        auto r = ref->createLayerWithZoomInfo(::djinni::String::toCpp(jniEnv, j_identifier),
                                              ::djinni::List<::djinni_generated::NativeLoaderInterface>::toCpp(jniEnv, j_tileLoaders),
                                              ::djinni_generated::NativeTiled2dMapZoomInfo::toCpp(jniEnv, j_zoomInfo));
        return ::djinni::release(::djinni_generated::NativeTiled2dMapRasterLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeTiled2dMapLayerConfig::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_wmts_WmtsCapabilitiesResource_00024CppProxy_native_1createLayerConfig(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_identifier)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::WmtsCapabilitiesResource>(nativeRef);
        auto r = ref->createLayerConfig(::djinni::String::toCpp(jniEnv, j_identifier));
        return ::djinni::release(::djinni_generated::NativeTiled2dMapLayerConfig::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeTiled2dMapLayerConfig::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_wmts_WmtsCapabilitiesResource_00024CppProxy_native_1createLayerConfigWithZoomInfo(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_identifier, ::djinni_generated::NativeTiled2dMapZoomInfo::JniType j_zoomInfo)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::WmtsCapabilitiesResource>(nativeRef);
        auto r = ref->createLayerConfigWithZoomInfo(::djinni::String::toCpp(jniEnv, j_identifier),
                                                    ::djinni_generated::NativeTiled2dMapZoomInfo::toCpp(jniEnv, j_zoomInfo));
        return ::djinni::release(::djinni_generated::NativeTiled2dMapLayerConfig::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_wmts_WmtsCapabilitiesResource_00024CppProxy_native_1getAllLayers(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::WmtsCapabilitiesResource>(nativeRef);
        auto r = ref->getAllLayers();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeWmtsLayerDescription>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
