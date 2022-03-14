#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::mappins { 
struct IRuntimeMappinData
{
    static constexpr const char* NAME = "gamemappinsIRuntimeMappinData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IRuntimeMappinData, 0x50);
} // namespace game::mappins
} // namespace RED4ext
