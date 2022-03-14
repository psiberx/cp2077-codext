#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vg/BaseVectorGraphicShape.hpp>

namespace RED4ext
{
namespace vg { 
struct VectorGraphicShape_Circle : vg::BaseVectorGraphicShape
{
    static constexpr const char* NAME = "vgVectorGraphicShape_Circle";
    static constexpr const char* ALIAS = NAME;

    float dius; // C0
    uint8_t unkC4[0xD0 - 0xC4]; // C4
};
RED4EXT_ASSERT_SIZE(VectorGraphicShape_Circle, 0xD0);
} // namespace vg
} // namespace RED4ext
