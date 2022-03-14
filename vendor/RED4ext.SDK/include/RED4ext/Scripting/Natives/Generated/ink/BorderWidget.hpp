#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct BorderWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkBorderWidget";
    static constexpr const char* ALIAS = "inkBorder";

    float thickness; // 200
    uint8_t unk204[0x210 - 0x204]; // 204
};
RED4EXT_ASSERT_SIZE(BorderWidget, 0x210);
} // namespace ink
using inkBorder = ink::BorderWidget;
} // namespace RED4ext
