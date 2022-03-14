#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetAbility
{
    static constexpr const char* NAME = "gameMuppetAbility";
    static constexpr const char* ALIAS = NAME;

    int32_t value; // 00
    int32_t blocks; // 04
    uint8_t unk08[0x28 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(MuppetAbility, 0x28);
} // namespace game
} // namespace RED4ext
