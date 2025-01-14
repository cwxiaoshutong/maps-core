// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

#import "MCIconLayerInterface+Private.h"
#import "MCIconLayerInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCIconInfoInterface+Private.h"
#import "MCIconLayerCallbackInterface+Private.h"
#import "MCLayerInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCIconLayerInterface ()

- (id)initWithCpp:(const std::shared_ptr<::IconLayerInterface>&)cppRef;

@end

@implementation MCIconLayerInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::IconLayerInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::IconLayerInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCIconLayerInterface *)create {
    try {
        auto objcpp_result_ = ::IconLayerInterface::create();
        return ::djinni_generated::IconLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setIcons:(nonnull NSArray<MCIconInfoInterface *> *)icons {
    try {
        _cppRefHandle.get()->setIcons(::djinni::List<::djinni_generated::IconInfoInterface>::toCpp(icons));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSArray<MCIconInfoInterface *> *)getIcons {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getIcons();
        return ::djinni::List<::djinni_generated::IconInfoInterface>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)remove:(nullable MCIconInfoInterface *)icon {
    try {
        _cppRefHandle.get()->remove(::djinni_generated::IconInfoInterface::toCpp(icon));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)add:(nullable MCIconInfoInterface *)icon {
    try {
        _cppRefHandle.get()->add(::djinni_generated::IconInfoInterface::toCpp(icon));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)clear {
    try {
        _cppRefHandle.get()->clear();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setCallbackHandler:(nullable id<MCIconLayerCallbackInterface>)handler {
    try {
        _cppRefHandle.get()->setCallbackHandler(::djinni_generated::IconLayerCallbackInterface::toCpp(handler));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCLayerInterface>)asLayerInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asLayerInterface();
        return ::djinni_generated::LayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)invalidate {
    try {
        _cppRefHandle.get()->invalidate();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setLayerClickable:(BOOL)isLayerClickable {
    try {
        _cppRefHandle.get()->setLayerClickable(::djinni::Bool::toCpp(isLayerClickable));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto IconLayerInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto IconLayerInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCIconLayerInterface>(cpp);
}

} // namespace djinni_generated

@end
