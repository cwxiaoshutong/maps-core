// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni
#ifdef __cplusplus

#include "LineGroup2dInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCLineGroup2dInterface;

namespace djinni_generated {

class LineGroup2dInterface
{
public:
    using CppType = std::shared_ptr<::LineGroup2dInterface>;
    using CppOptType = std::shared_ptr<::LineGroup2dInterface>;
    using ObjcType = id<MCLineGroup2dInterface>;

    using Boxed = LineGroup2dInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

#endif