#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink { 
struct GameNotificationEvt : red::Event
{
    static constexpr const char* NAME = "inkGameNotificationEvt";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(GameNotificationEvt, 0x50);
} // namespace ink
} // namespace RED4ext
