#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITierSystem.hpp>

namespace RED4ext
{
namespace game { 
struct TierSystem : game::ITierSystem
{
    static constexpr const char* NAME = "gameTierSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xF0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TierSystem, 0xF0);
} // namespace game
} // namespace RED4ext
