#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game { 
struct AttitudePrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameAttitudePrereqState";
    static constexpr const char* ALIAS = "AttitudePrereqState";

    uint8_t unkC0[0xC8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(AttitudePrereqState, 0xC8);
} // namespace game
using AttitudePrereqState = game::AttitudePrereqState;
} // namespace RED4ext
