#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatsDataSystem.hpp>

namespace RED4ext
{
namespace game { 
struct StatsDataSystem : game::IStatsDataSystem
{
    static constexpr const char* NAME = "gameStatsDataSystem";
    static constexpr const char* ALIAS = "StatsDataSystem";

    uint8_t unk48[0x130 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatsDataSystem, 0x130);
} // namespace game
using StatsDataSystem = game::StatsDataSystem;
} // namespace RED4ext
