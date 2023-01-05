#! /usr/bin/env bash
set -eu
shopt -s nullglob

# Locate the script file.  Cross symlinks if necessary.
loc="$0"
while [ -h "$loc" ]; do
    ls=`ls -ld "$loc"`
    link=`expr "$ls" : '.*-> \(.*\)$'`
    if expr "$link" : '/.*' > /dev/null; then
        loc="$link"  # Absolute link
    else
        loc="`dirname "$loc"`/$link"  # Relative link
    fi
done
base_dir=$(cd "`dirname "$loc"`" && pwd)

JAVA_PACKAGE="io.openmobilemaps.mapscore.shared"
PROJECT_PREFIX="MC"

DJINNI_OUT_DIR="../bridging"

OBJC_OUT="$DJINNI_OUT_DIR/ios"
OBJC_PREFIX="$PROJECT_PREFIX"
OBJCPP_OUT="$DJINNI_OUT_DIR/ios"

JAVA_OUT="$DJINNI_OUT_DIR/android/java/io/openmobilemaps/mapscore/shared"
JNI_OUT="$DJINNI_OUT_DIR/android/jni"

CPP_OUT="../shared/public"
HPP_EXT="h"

IDENT_CPP="FooBar"
IDENT_CPP_FIELD="fooBar"
IDENT_CPP_ENUM="FOO_BAR"
IDENT_CPP_METHOD="fooBar"
IDENT_JNI_CLASS="NativeFooBar"
IDENT_JAVA="fooBar"


for dir in "$OBJCPP_OUT" "$OBJC_OUT" "$JNI_OUT" "$JAVA_OUT"; do
        if [ -e "$dir" ]; then
            echo "Deleting \"$dir\"..."
            rm -r "$dir"
        fi
done
    
# Build djinni
"$base_dir/../external/djinni/src/build.sh"

echo "printing"

for file in $(find . -name "*.djinni" -type f -print); do
    [[ ! -e $file ]] && continue  # continue, if file does not exist
    
    path="${file:2}"
    SUB=$(echo "$path" | sed -n "s/\(.*\)\/[^\/]*.djinni/\1/p")
    SUBPOINT=".$(echo "$SUB" | tr "/" ".")"

    if [[ "$SUBPOINT" == "." ]]; then
        SUBPOINT=""
    fi
    
    "$base_dir/../external/djinni/src/run" \
        --java-out "$JAVA_OUT/$SUB" \
        --java-package "$JAVA_PACKAGE$SUBPOINT" \
        --ident-java-field "$IDENT_JAVA" \
        --ident-java-enum "$IDENT_CPP_ENUM" \
        \
        --cpp-out "$CPP_OUT" \
        --hpp-ext "$HPP_EXT" \
        --ident-cpp-type "$IDENT_CPP" \
        --ident-cpp-file "$IDENT_CPP" \
        --ident-cpp-enum "$IDENT_CPP_ENUM" \
        --ident-cpp-type-param "$IDENT_CPP_METHOD" \
        --ident-cpp-method "$IDENT_CPP_METHOD" \
        --ident-cpp-local "$IDENT_CPP_METHOD" \
        --ident-cpp-field "$IDENT_CPP_FIELD" \
        \
        --jni-out "$JNI_OUT/$SUB" \
        --ident-jni-class "$IDENT_JNI_CLASS" \
        --ident-jni-file "$IDENT_JNI_CLASS" \
        \
        --objc-out "$OBJC_OUT" \
        --objcpp-out "$OBJCPP_OUT" \
        --objc-type-prefix "$OBJC_PREFIX" \
        --ident-objc-enum "$IDENT_CPP_ENUM" \
        --objc-strict-protocols false \
        \
        --yaml-out "./yaml" \
        --idl "$file"
    

done


echo "djinni completed."
