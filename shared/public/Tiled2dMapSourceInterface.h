// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_layer.djinni

#pragma once

#include "RectCoord.h"

class Tiled2dMapSourceInterface {
public:
    virtual ~Tiled2dMapSourceInterface() {}

    virtual void onVisibleBoundsChanged(const ::RectCoord & visibleBounds, double zoom) = 0;
};