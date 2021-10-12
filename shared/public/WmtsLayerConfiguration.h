// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts.djinni

#pragma once

#include "RectCoord.h"
#include <string>
#include <unordered_map>
#include <utility>

struct WmtsLayerConfiguration final {
    std::string indentifier;
    std::string urlFormat;
    ::RectCoord bounds;
    std::unordered_map<std::string, std::string> dimensions;

    WmtsLayerConfiguration(std::string indentifier_,
                           std::string urlFormat_,
                           ::RectCoord bounds_,
                           std::unordered_map<std::string, std::string> dimensions_)
    : indentifier(std::move(indentifier_))
    , urlFormat(std::move(urlFormat_))
    , bounds(std::move(bounds_))
    , dimensions(std::move(dimensions_))
    {}
};