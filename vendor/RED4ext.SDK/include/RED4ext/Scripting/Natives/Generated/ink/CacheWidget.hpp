#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CacheMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct CacheWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkCacheWidget";
    static constexpr const char* ALIAS = "inkCacheWidget";

    CName externalDynamicTexture; // 230
    Vector2 innerScale; // 238
    ink::CacheMode mode; // 240
    uint8_t unk241[0x2F0 - 0x241]; // 241
};
RED4EXT_ASSERT_SIZE(CacheWidget, 0x2F0);
} // namespace ink
} // namespace RED4ext
