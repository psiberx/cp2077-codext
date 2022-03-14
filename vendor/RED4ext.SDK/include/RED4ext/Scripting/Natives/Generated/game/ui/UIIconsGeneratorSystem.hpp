#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/IUIIconsGeneratorSystem.hpp>

namespace RED4ext
{
namespace game::ui { 
struct UIIconsGeneratorSystem : game::ui::IUIIconsGeneratorSystem
{
    static constexpr const char* NAME = "gameuiUIIconsGeneratorSystem";
    static constexpr const char* ALIAS = "UIIconsGeneratorSystem";

    uint8_t unk48[0x620 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(UIIconsGeneratorSystem, 0x620);
} // namespace game::ui
using UIIconsGeneratorSystem = game::ui::UIIconsGeneratorSystem;
} // namespace RED4ext
