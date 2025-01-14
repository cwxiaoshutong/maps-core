// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCTextInterface+Private.h"
#import "MCTextInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCGraphicsObjectInterface+Private.h"
#import "MCRenderingContextInterface+Private.h"
#import "MCSharedBytes+Private.h"
#import "MCTextureHolderInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTextInterfaceCppProxy : NSObject<MCTextInterface>

- (id)initWithCpp:(const std::shared_ptr<::TextInterface>&)cppRef;

@end

@implementation MCTextInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::TextInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::TextInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)setTextsShared:(nonnull MCSharedBytes *)vertices
               indices:(nonnull MCSharedBytes *)indices {
    try {
        _cppRefHandle.get()->setTextsShared(::djinni_generated::SharedBytes::toCpp(vertices),
                                            ::djinni_generated::SharedBytes::toCpp(indices));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)loadTexture:(nullable id<MCRenderingContextInterface>)context
      textureHolder:(nullable id<MCTextureHolderInterface>)textureHolder {
    try {
        _cppRefHandle.get()->loadTexture(::djinni_generated::RenderingContextInterface::toCpp(context),
                                         ::djinni_generated::TextureHolderInterface::toCpp(textureHolder));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)removeTexture {
    try {
        _cppRefHandle.get()->removeTexture();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCGraphicsObjectInterface>)asGraphicsObject {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asGraphicsObject();
        return ::djinni_generated::GraphicsObjectInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class TextInterface::ObjcProxy final
: public ::TextInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::TextInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void setTextsShared(const ::SharedBytes & c_vertices, const ::SharedBytes & c_indices) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setTextsShared:(::djinni_generated::SharedBytes::fromCpp(c_vertices))
                                                             indices:(::djinni_generated::SharedBytes::fromCpp(c_indices))];
        }
    }
    void loadTexture(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & c_context, const /*not-null*/ std::shared_ptr<::TextureHolderInterface> & c_textureHolder) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() loadTexture:(::djinni_generated::RenderingContextInterface::fromCpp(c_context))
                                                    textureHolder:(::djinni_generated::TextureHolderInterface::fromCpp(c_textureHolder))];
        }
    }
    void removeTexture() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() removeTexture];
        }
    }
    /*not-null*/ std::shared_ptr<::GraphicsObjectInterface> asGraphicsObject() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() asGraphicsObject];
            return ::djinni_generated::GraphicsObjectInterface::toCpp(objcpp_result_);
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto TextInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCTextInterfaceCppProxy class]]) {
        return ((MCTextInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto TextInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCTextInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
