// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from polygon.djinni
#ifdef __cplusplus

#include "PolygonLayerInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MCPolygonLayerInterface;

namespace djinni_generated {

class PolygonLayerInterface
{
public:
    using CppType = std::shared_ptr<::PolygonLayerInterface>;
    using CppOptType = std::shared_ptr<::PolygonLayerInterface>;
    using ObjcType = MCPolygonLayerInterface*;

    using Boxed = PolygonLayerInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

#endif