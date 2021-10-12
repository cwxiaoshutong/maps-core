// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from styling.djinni

#include "NativeColorStateList.h"  // my header
#include "NativeColor.h"

namespace djinni_generated {

NativeColorStateList::NativeColorStateList() = default;

NativeColorStateList::~NativeColorStateList() = default;

auto NativeColorStateList::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeColorStateList>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni_generated::NativeColor::fromCpp(jniEnv, c.normal)),
                                                           ::djinni::get(::djinni_generated::NativeColor::fromCpp(jniEnv, c.highlighted)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeColorStateList::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeColorStateList>::get();
    return {::djinni_generated::NativeColor::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_normal)),
            ::djinni_generated::NativeColor::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_highlighted))};
}

}  // namespace djinni_generated