#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HackingMinigameState.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct AccessPointMiniGameStatus : red::Event
{
    static constexpr const char* NAME = "gameuiAccessPointMiniGameStatus";
    static constexpr const char* ALIAS = "AccessPointMiniGameStatus";

    game::ui::HackingMinigameState minigameState; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AccessPointMiniGameStatus, 0x48);
} // namespace game::ui
using AccessPointMiniGameStatus = game::ui::AccessPointMiniGameStatus;
} // namespace RED4ext
