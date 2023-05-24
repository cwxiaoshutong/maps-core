// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCGraphicsObjectFactoryInterface+Private.h"
#import "MCGraphicsObjectFactoryInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCLine2dInterface+Private.h"
#import "MCLineGroup2dInterface+Private.h"
#import "MCPolygon2dInterface+Private.h"
#import "MCPolygonGroup2dInterface+Private.h"
#import "MCPolygonPatternGroup2dInterface+Private.h"
#import "MCQuad2dInstancedInterface+Private.h"
#import "MCQuad2dInterface+Private.h"
#import "MCQuad2dStretchedInstancedInterface+Private.h"
#import "MCShaderProgramInterface+Private.h"
#import "MCTextInstancedInterface+Private.h"
#import "MCTextInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCGraphicsObjectFactoryInterfaceCppProxy : NSObject<MCGraphicsObjectFactoryInterface>

- (id)initWithCpp:(const std::shared_ptr<::GraphicsObjectFactoryInterface>&)cppRef;

@end

@implementation MCGraphicsObjectFactoryInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::GraphicsObjectFactoryInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::GraphicsObjectFactoryInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nullable id<MCQuad2dInterface>)createQuad:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createQuad(::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::Quad2dInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCLine2dInterface>)createLine:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createLine(::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::Line2dInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCPolygon2dInterface>)createPolygon:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createPolygon(::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::Polygon2dInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCQuad2dInstancedInterface>)createQuadInstanced:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createQuadInstanced(::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::Quad2dInstancedInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCQuad2dStretchedInstancedInterface>)createQuadStretchedInstanced:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createQuadStretchedInstanced(::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::Quad2dStretchedInstancedInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCLineGroup2dInterface>)createLineGroup:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createLineGroup(::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::LineGroup2dInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCPolygonGroup2dInterface>)createPolygonGroup:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createPolygonGroup(::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::PolygonGroup2dInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCPolygonPatternGroup2dInterface>)createPolygonPatternGroup:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createPolygonPatternGroup(::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::PolygonPatternGroup2dInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCQuad2dInterface>)createQuadMask {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createQuadMask();
        return ::djinni_generated::Quad2dInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCPolygon2dInterface>)createPolygonMask {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createPolygonMask();
        return ::djinni_generated::Polygon2dInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCTextInterface>)createText:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createText(::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::TextInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCTextInstancedInterface>)createTextInstanced:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->createTextInstanced(::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::TextInstancedInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class GraphicsObjectFactoryInterface::ObjcProxy final
: public ::GraphicsObjectFactoryInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::GraphicsObjectFactoryInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    /*not-null*/ std::shared_ptr<::Quad2dInterface> createQuad(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & c_shader) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createQuad:(::djinni_generated::ShaderProgramInterface::fromCpp(c_shader))];
            return ::djinni_generated::Quad2dInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::Line2dInterface> createLine(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & c_shader) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createLine:(::djinni_generated::ShaderProgramInterface::fromCpp(c_shader))];
            return ::djinni_generated::Line2dInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::Polygon2dInterface> createPolygon(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & c_shader) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createPolygon:(::djinni_generated::ShaderProgramInterface::fromCpp(c_shader))];
            return ::djinni_generated::Polygon2dInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::Quad2dInstancedInterface> createQuadInstanced(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & c_shader) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createQuadInstanced:(::djinni_generated::ShaderProgramInterface::fromCpp(c_shader))];
            return ::djinni_generated::Quad2dInstancedInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::Quad2dStretchedInstancedInterface> createQuadStretchedInstanced(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & c_shader) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createQuadStretchedInstanced:(::djinni_generated::ShaderProgramInterface::fromCpp(c_shader))];
            return ::djinni_generated::Quad2dStretchedInstancedInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::LineGroup2dInterface> createLineGroup(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & c_shader) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createLineGroup:(::djinni_generated::ShaderProgramInterface::fromCpp(c_shader))];
            return ::djinni_generated::LineGroup2dInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::PolygonGroup2dInterface> createPolygonGroup(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & c_shader) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createPolygonGroup:(::djinni_generated::ShaderProgramInterface::fromCpp(c_shader))];
            return ::djinni_generated::PolygonGroup2dInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::PolygonPatternGroup2dInterface> createPolygonPatternGroup(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & c_shader) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createPolygonPatternGroup:(::djinni_generated::ShaderProgramInterface::fromCpp(c_shader))];
            return ::djinni_generated::PolygonPatternGroup2dInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::Quad2dInterface> createQuadMask() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createQuadMask];
            return ::djinni_generated::Quad2dInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::Polygon2dInterface> createPolygonMask() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createPolygonMask];
            return ::djinni_generated::Polygon2dInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::TextInterface> createText(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & c_shader) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createText:(::djinni_generated::ShaderProgramInterface::fromCpp(c_shader))];
            return ::djinni_generated::TextInterface::toCpp(objcpp_result_);
        }
    }
    /*not-null*/ std::shared_ptr<::TextInstancedInterface> createTextInstanced(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & c_shader) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() createTextInstanced:(::djinni_generated::ShaderProgramInterface::fromCpp(c_shader))];
            return ::djinni_generated::TextInstancedInterface::toCpp(objcpp_result_);
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto GraphicsObjectFactoryInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCGraphicsObjectFactoryInterfaceCppProxy class]]) {
        return ((MCGraphicsObjectFactoryInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto GraphicsObjectFactoryInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCGraphicsObjectFactoryInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
