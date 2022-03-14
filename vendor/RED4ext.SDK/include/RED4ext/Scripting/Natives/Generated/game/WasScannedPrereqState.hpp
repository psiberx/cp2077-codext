#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game { 
struct WasScannedPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameWasScannedPrereqState";
    static constexpr const char* ALIAS = "WasScannedPrereqState";

    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(WasScannedPrereqState, 0xD0);
} // namespace game
using WasScannedPrereqState = game::WasScannedPrereqState;
} // namespace RED4ext
