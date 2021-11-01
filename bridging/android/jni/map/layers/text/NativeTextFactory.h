// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from text.djinni

#pragma once

#include "TextFactory.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTextFactory final : ::djinni::JniInterface<::TextFactory, NativeTextFactory> {
public:
    using CppType = std::shared_ptr<::TextFactory>;
    using CppOptType = std::shared_ptr<::TextFactory>;
    using JniType = jobject;

    using Boxed = NativeTextFactory;

    ~NativeTextFactory();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTextFactory>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTextFactory>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTextFactory();
    friend ::djinni::JniClass<NativeTextFactory>;
    friend ::djinni::JniInterface<::TextFactory, NativeTextFactory>;

};

}  // namespace djinni_generated