#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/StimuliData.hpp>

namespace RED4ext
{
namespace game { 
struct SetupWorkspotActionEvent : sense::StimuliData
{
    static constexpr const char* NAME = "gameSetupWorkspotActionEvent";
    static constexpr const char* ALIAS = "SetupWorkspotActionEvent";

    uint8_t unk40[0x260 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SetupWorkspotActionEvent, 0x260);
} // namespace game
using SetupWorkspotActionEvent = game::SetupWorkspotActionEvent;
} // namespace RED4ext
