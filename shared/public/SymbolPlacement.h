// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from text.djinni

#pragma once

#include <functional>

enum class SymbolPlacement : int {
    POINT,
    LINE,
    LINE_CENTER,
};

namespace std {

template <>
struct hash<::SymbolPlacement> {
    size_t operator()(::SymbolPlacement type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
