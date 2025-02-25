// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#import "MCRenderPassConfig+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto RenderPassConfig::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::I32::toCpp(obj.renderPassIndex)};
}

auto RenderPassConfig::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCRenderPassConfig alloc] initWithRenderPassIndex:(::djinni::I32::fromCpp(cpp.renderPassIndex))];
}

} // namespace djinni_generated
