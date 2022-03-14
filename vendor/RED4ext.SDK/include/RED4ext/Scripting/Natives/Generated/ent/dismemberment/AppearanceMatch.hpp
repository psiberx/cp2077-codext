#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace ent::dismemberment { 
struct AppearanceMatch
{
    static constexpr const char* NAME = "entdismembermentAppearanceMatch";
    static constexpr const char* ALIAS = NAME;

    CName Character; // 00
    CName Mesh; // 08
    bool SetByUser; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(AppearanceMatch, 0x18);
} // namespace ent::dismemberment
} // namespace RED4ext
