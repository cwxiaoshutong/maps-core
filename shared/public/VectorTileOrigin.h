// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_layer.djinni

#pragma once

#include <functional>

enum class VectorTileOrigin : int {
    TOP_LEFT,
    BOTTOM_LEFT,
};

namespace std {

template <>
struct hash<::VectorTileOrigin> {
    size_t operator()(::VectorTileOrigin type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std