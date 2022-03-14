#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace world::geometry { 
struct HandIKDescriptionResult
{
    static constexpr const char* NAME = "worldgeometryHandIKDescriptionResult";
    static constexpr const char* ALIAS = "HandIKDescriptionResult";

    Vector4 grabPointStart; // 00
    Vector4 grabPointEnd; // 10
};
RED4EXT_ASSERT_SIZE(HandIKDescriptionResult, 0x20);
} // namespace world::geometry
using HandIKDescriptionResult = world::geometry::HandIKDescriptionResult;
} // namespace RED4ext
