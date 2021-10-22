// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from touch_handler.djinni

#import "MCTouchInterface+Private.h"
#import "MCTouchInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCVec2F+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTouchInterface ()

- (id)initWithCpp:(const std::shared_ptr<::TouchInterface>&)cppRef;

@end

@implementation MCTouchInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::TouchInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::TouchInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (BOOL)onTouchDown:(nonnull MCVec2F *)posScreen {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->onTouchDown(::djinni_generated::Vec2F::toCpp(posScreen));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)onClickUnconfirmed:(nonnull MCVec2F *)posScreen {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->onClickUnconfirmed(::djinni_generated::Vec2F::toCpp(posScreen));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)onClickConfirmed:(nonnull MCVec2F *)posScreen {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->onClickConfirmed(::djinni_generated::Vec2F::toCpp(posScreen));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)onDoubleClick:(nonnull MCVec2F *)posScreen {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->onDoubleClick(::djinni_generated::Vec2F::toCpp(posScreen));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)onLongPress:(nonnull MCVec2F *)posScreen {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->onLongPress(::djinni_generated::Vec2F::toCpp(posScreen));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)onMove:(nonnull MCVec2F *)deltaScreen
     confirmed:(BOOL)confirmed
   doubleClick:(BOOL)doubleClick {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->onMove(::djinni_generated::Vec2F::toCpp(deltaScreen),
                                                          ::djinni::Bool::toCpp(confirmed),
                                                          ::djinni::Bool::toCpp(doubleClick));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)onMoveComplete {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->onMoveComplete();
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)onTwoFingerClick:(nonnull MCVec2F *)posScreen1
              posScreen2:(nonnull MCVec2F *)posScreen2 {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->onTwoFingerClick(::djinni_generated::Vec2F::toCpp(posScreen1),
                                                                    ::djinni_generated::Vec2F::toCpp(posScreen2));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)onTwoFingerMove:(nonnull NSArray<MCVec2F *> *)posScreenOld
           posScreenNew:(nonnull NSArray<MCVec2F *> *)posScreenNew {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->onTwoFingerMove(::djinni::List<::djinni_generated::Vec2F>::toCpp(posScreenOld),
                                                                   ::djinni::List<::djinni_generated::Vec2F>::toCpp(posScreenNew));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)onTwoFingerMoveComplete {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->onTwoFingerMoveComplete();
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)clearTouch {
    try {
        _cppRefHandle.get()->clearTouch();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto TouchInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto TouchInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCTouchInterface>(cpp);
}

}  // namespace djinni_generated

@end
