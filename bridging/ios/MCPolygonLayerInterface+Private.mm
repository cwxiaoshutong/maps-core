// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from polygon.djinni

#import "MCPolygonLayerInterface+Private.h"
#import "MCPolygonLayerInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCLayerInterface+Private.h"
#import "MCPolygonInfo+Private.h"
#import "MCPolygonLayerCallbackInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCPolygonLayerInterface ()

- (id)initWithCpp:(const std::shared_ptr<::PolygonLayerInterface>&)cppRef;

@end

@implementation MCPolygonLayerInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::PolygonLayerInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::PolygonLayerInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCPolygonLayerInterface *)create {
    try {
        auto objcpp_result_ = ::PolygonLayerInterface::create();
        return ::djinni_generated::PolygonLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setPolygons:(nonnull NSArray<MCPolygonInfo *> *)polygons {
    try {
        _cppRefHandle.get()->setPolygons(::djinni::List<::djinni_generated::PolygonInfo>::toCpp(polygons));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSArray<MCPolygonInfo *> *)getPolygons {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getPolygons();
        return ::djinni::List<::djinni_generated::PolygonInfo>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)remove:(nonnull MCPolygonInfo *)polygon {
    try {
        _cppRefHandle.get()->remove(::djinni_generated::PolygonInfo::toCpp(polygon));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)add:(nonnull MCPolygonInfo *)polygon {
    try {
        _cppRefHandle.get()->add(::djinni_generated::PolygonInfo::toCpp(polygon));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)addAll:(nonnull NSArray<MCPolygonInfo *> *)polygons {
    try {
        _cppRefHandle.get()->addAll(::djinni::List<::djinni_generated::PolygonInfo>::toCpp(polygons));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)clear {
    try {
        _cppRefHandle.get()->clear();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setCallbackHandler:(nullable id<MCPolygonLayerCallbackInterface>)handler {
    try {
        _cppRefHandle.get()->setCallbackHandler(::djinni_generated::PolygonLayerCallbackInterface::toCpp(handler));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCLayerInterface>)asLayerInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asLayerInterface();
        return ::djinni_generated::LayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)resetSelection {
    try {
        _cppRefHandle.get()->resetSelection();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setLayerClickable:(BOOL)isLayerClickable {
    try {
        _cppRefHandle.get()->setLayerClickable(::djinni::Bool::toCpp(isLayerClickable));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto PolygonLayerInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto PolygonLayerInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCPolygonLayerInterface>(cpp);
}

}  // namespace djinni_generated

@end
