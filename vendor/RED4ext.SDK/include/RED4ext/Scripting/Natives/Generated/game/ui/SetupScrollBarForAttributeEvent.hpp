#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SetupScrollBarForAttributeEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetupScrollBarForAttributeEvent";
    static constexpr const char* ALIAS = "SetupScrollBarForAttributeEvent";

    uint32_t attribute; // 40
    float startValue; // 44
    float minValue; // 48
    float maxValue; // 4C
    float step; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(SetupScrollBarForAttributeEvent, 0x58);
} // namespace game::ui
using SetupScrollBarForAttributeEvent = game::ui::SetupScrollBarForAttributeEvent;
} // namespace RED4ext
