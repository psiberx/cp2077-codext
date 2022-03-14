#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetControllerSnapshot
{
    static constexpr const char* NAME = "gameMuppetControllerSnapshot";
    static constexpr const char* ALIAS = NAME;

    CName controllerId; // 00
    bool isActive; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(MuppetControllerSnapshot, 0x10);
} // namespace game
} // namespace RED4ext
