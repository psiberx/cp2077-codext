#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace ink { struct Widget; }

namespace ink { 
struct WidgetReference
{
    static constexpr const char* NAME = "inkWidgetReference";
    static constexpr const char* ALIAS = "inkWidgetRef";

    uint8_t unk00[0x8 - 0x0]; // 0
    WeakHandle<ink::Widget> widget; // 08
};
RED4EXT_ASSERT_SIZE(WidgetReference, 0x18);
} // namespace ink
using inkWidgetRef = ink::WidgetReference;
} // namespace RED4ext
