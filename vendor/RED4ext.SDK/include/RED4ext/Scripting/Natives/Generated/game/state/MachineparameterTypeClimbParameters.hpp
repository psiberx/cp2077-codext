#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineparameterTypeClimbParametersBase.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineparameterTypeClimbParameters : game::state::MachineparameterTypeClimbParametersBase
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeClimbParameters";
    static constexpr const char* ALIAS = "ClimbParameters";

    uint8_t unkF0[0x120 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeClimbParameters, 0x120);
} // namespace game::state
using ClimbParameters = game::state::MachineparameterTypeClimbParameters;
} // namespace RED4ext
