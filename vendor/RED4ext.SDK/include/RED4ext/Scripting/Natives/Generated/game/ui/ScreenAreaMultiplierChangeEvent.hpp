#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ScreenAreaMultiplierChangeEvent : red::Event
{
    static constexpr const char* NAME = "gameuiScreenAreaMultiplierChangeEvent";
    static constexpr const char* ALIAS = NAME;

    float screenAreaMultiplier; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ScreenAreaMultiplierChangeEvent, 0x48);
} // namespace game::ui
} // namespace RED4ext
