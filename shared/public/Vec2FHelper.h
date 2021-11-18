/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#pragma once
#include "Vec2F.h"

class Vec2FHelper {
  public:
    static double distance(const ::Vec2F &from, const ::Vec2F &to);

    static ::Vec2F midpoint(const ::Vec2F &from, const ::Vec2F &to);

    static ::Vec2F rotate(const ::Vec2F &p, const ::Vec2F &origin, float angleDegree);
};
