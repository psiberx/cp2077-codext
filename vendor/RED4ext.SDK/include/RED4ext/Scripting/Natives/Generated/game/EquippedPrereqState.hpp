#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game { 
struct EquippedPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameEquippedPrereqState";
    static constexpr const char* ALIAS = "EquippedPrereqState";

    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(EquippedPrereqState, 0xD0);
} // namespace game
using EquippedPrereqState = game::EquippedPrereqState;
} // namespace RED4ext
