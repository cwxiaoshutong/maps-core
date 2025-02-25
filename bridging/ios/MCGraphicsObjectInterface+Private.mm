// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCGraphicsObjectInterface+Private.h"
#import "MCGraphicsObjectInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCRenderPassConfig+Private.h"
#import "MCRenderingContextInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCGraphicsObjectInterfaceCppProxy : NSObject<MCGraphicsObjectInterface>

- (id)initWithCpp:(const std::shared_ptr<::GraphicsObjectInterface>&)cppRef;

@end

@implementation MCGraphicsObjectInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::GraphicsObjectInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::GraphicsObjectInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (BOOL)isReady {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->isReady();
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setup:(nullable id<MCRenderingContextInterface>)context {
    try {
        _cppRefHandle.get()->setup(::djinni_generated::RenderingContextInterface::toCpp(context));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)clear {
    try {
        _cppRefHandle.get()->clear();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setIsInverseMasked:(BOOL)inversed {
    try {
        _cppRefHandle.get()->setIsInverseMasked(::djinni::Bool::toCpp(inversed));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)render:(nullable id<MCRenderingContextInterface>)context
    renderPass:(nonnull MCRenderPassConfig *)renderPass
     mvpMatrix:(int64_t)mvpMatrix
      isMasked:(BOOL)isMasked
screenPixelAsRealMeterFactor:(double)screenPixelAsRealMeterFactor {
    try {
        _cppRefHandle.get()->render(::djinni_generated::RenderingContextInterface::toCpp(context),
                                    ::djinni_generated::RenderPassConfig::toCpp(renderPass),
                                    ::djinni::I64::toCpp(mvpMatrix),
                                    ::djinni::Bool::toCpp(isMasked),
                                    ::djinni::F64::toCpp(screenPixelAsRealMeterFactor));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class GraphicsObjectInterface::ObjcProxy final
: public ::GraphicsObjectInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::GraphicsObjectInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    bool isReady() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() isReady];
            return ::djinni::Bool::toCpp(objcpp_result_);
        }
    }
    void setup(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & c_context) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setup:(::djinni_generated::RenderingContextInterface::fromCpp(c_context))];
        }
    }
    void clear() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() clear];
        }
    }
    void setIsInverseMasked(bool c_inversed) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setIsInverseMasked:(::djinni::Bool::fromCpp(c_inversed))];
        }
    }
    void render(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & c_context, const ::RenderPassConfig & c_renderPass, int64_t c_mvpMatrix, bool c_isMasked, double c_screenPixelAsRealMeterFactor) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() render:(::djinni_generated::RenderingContextInterface::fromCpp(c_context))
                                                  renderPass:(::djinni_generated::RenderPassConfig::fromCpp(c_renderPass))
                                                   mvpMatrix:(::djinni::I64::fromCpp(c_mvpMatrix))
                                                    isMasked:(::djinni::Bool::fromCpp(c_isMasked))
                                screenPixelAsRealMeterFactor:(::djinni::F64::fromCpp(c_screenPixelAsRealMeterFactor))];
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto GraphicsObjectInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCGraphicsObjectInterfaceCppProxy class]]) {
        return ((MCGraphicsObjectInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto GraphicsObjectInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCGraphicsObjectInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
