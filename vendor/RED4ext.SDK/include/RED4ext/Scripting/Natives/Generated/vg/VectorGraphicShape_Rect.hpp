#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/vg/BaseVectorGraphicShape.hpp>

namespace RED4ext
{
namespace vg { 
struct VectorGraphicShape_Rect : vg::BaseVectorGraphicShape
{
    static constexpr const char* NAME = "vgVectorGraphicShape_Rect";
    static constexpr const char* ALIAS = NAME;

    Vector2 mensions; // C0
    uint8_t unkC8[0xD0 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(VectorGraphicShape_Rect, 0xD0);
} // namespace vg
} // namespace RED4ext
