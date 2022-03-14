#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuItemListGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct DeathMenuGameController : game::ui::MenuItemListGameController
{
    static constexpr const char* NAME = "gameuiDeathMenuGameController";
    static constexpr const char* ALIAS = "DeathMenuGameController";

};
RED4EXT_ASSERT_SIZE(DeathMenuGameController, 0x170);
} // namespace game::ui
using DeathMenuGameController = game::ui::DeathMenuGameController;
} // namespace RED4ext
