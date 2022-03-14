#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct VectorGraphicWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkVectorGraphicWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk200[0x220 - 0x200]; // 200
};
RED4EXT_ASSERT_SIZE(VectorGraphicWidget, 0x220);
} // namespace ink
} // namespace RED4ext
