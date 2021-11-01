// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

#import "MCVectorTileLoaderResult+Private.h"
#import "DJIMarshal+Private.h"
#import "MCLoaderStatus+Private.h"
#import "MCVectorTileHolderInterface+Private.h"
#include <cassert>

namespace djinni_generated {

auto VectorTileLoaderResult::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Optional<std::optional, ::djinni_generated::VectorTileHolderInterface>::toCpp(obj.data),
            ::djinni::Enum<::LoaderStatus, MCLoaderStatus>::toCpp(obj.status)};
}

auto VectorTileLoaderResult::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCVectorTileLoaderResult alloc] initWithData:(::djinni::Optional<std::optional, ::djinni_generated::VectorTileHolderInterface>::fromCpp(cpp.data))
                                                   status:(::djinni::Enum<::LoaderStatus, MCLoaderStatus>::fromCpp(cpp.status))];
}

}  // namespace djinni_generated