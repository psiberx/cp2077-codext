#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world { 
enum class SpeedSplineOrientationMarkerType : uint32_t
{
    UseSplineOrientation = 0,
    WorldSpace = 1,
    LocalSpace = 2,
    KeepYawRoll_WorldSpacePitch = 3,
    KeepPitchYaw_WorldSpaceRoll = 4,
    KeepPitchRoll_WorldSpaceYaw = 5,
    KeepYaw_WorldSpacePitchRoll = 6,
    KeepRoll_WorldSpacePitchYaw = 7,
    KeepPitch_WorldSpaceYawRoll = 8,
};
} // namespace world
} // namespace RED4ext
