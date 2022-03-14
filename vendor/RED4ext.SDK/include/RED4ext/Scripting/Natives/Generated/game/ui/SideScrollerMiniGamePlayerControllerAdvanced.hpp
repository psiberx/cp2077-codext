#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SideScrollerMiniGamePlayerControllerAdvanced : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGamePlayerControllerAdvanced";
    static constexpr const char* ALIAS = "MinigamePlayerControllerAdvanced";

    uint8_t unk78[0x98 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGamePlayerControllerAdvanced, 0x98);
} // namespace game::ui
using MinigamePlayerControllerAdvanced = game::ui::SideScrollerMiniGamePlayerControllerAdvanced;
} // namespace RED4ext
