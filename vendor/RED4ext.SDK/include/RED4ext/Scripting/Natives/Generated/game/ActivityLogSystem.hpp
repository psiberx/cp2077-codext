#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IActivityLogSystem.hpp>

namespace RED4ext
{
namespace game { 
struct ActivityLogSystem : game::IActivityLogSystem
{
    static constexpr const char* NAME = "gameActivityLogSystem";
    static constexpr const char* ALIAS = "ActivityLogSystem";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ActivityLogSystem, 0x70);
} // namespace game
using ActivityLogSystem = game::ActivityLogSystem;
} // namespace RED4ext
