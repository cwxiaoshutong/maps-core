// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from text.djinni

#pragma once

#include "TextSymbolPlacement.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTextSymbolPlacement final : ::djinni::JniEnum {
public:
    using CppType = ::TextSymbolPlacement;
    using JniType = jobject;

    using Boxed = NativeTextSymbolPlacement;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<NativeTextSymbolPlacement>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<NativeTextSymbolPlacement>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    NativeTextSymbolPlacement() : JniEnum("io/openmobilemaps/mapscore/shared/map/layers/text/TextSymbolPlacement") {}
    friend ::djinni::JniClass<NativeTextSymbolPlacement>;
};

}  // namespace djinni_generated
