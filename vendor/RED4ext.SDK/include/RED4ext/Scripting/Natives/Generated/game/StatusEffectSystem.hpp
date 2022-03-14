#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatusEffectSystem.hpp>

namespace RED4ext
{
namespace game { 
struct StatusEffectSystem : game::IStatusEffectSystem
{
    static constexpr const char* NAME = "gameStatusEffectSystem";
    static constexpr const char* ALIAS = "StatusEffectSystem";

    uint8_t unk48[0x241C0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatusEffectSystem, 0x241C0);
} // namespace game
using StatusEffectSystem = game::StatusEffectSystem;
} // namespace RED4ext
