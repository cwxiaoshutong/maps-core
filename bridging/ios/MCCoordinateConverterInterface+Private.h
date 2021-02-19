// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni
#ifdef __cplusplus

#include "CoordinateConverterInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCCoordinateConverterInterface;

namespace djinni_generated {

class CoordinateConverterInterface
{
public:
    using CppType = std::shared_ptr<::CoordinateConverterInterface>;
    using CppOptType = std::shared_ptr<::CoordinateConverterInterface>;
    using ObjcType = id<MCCoordinateConverterInterface>;

    using Boxed = CoordinateConverterInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

#endif