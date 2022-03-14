#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct ItemDecorationEvent : red::Event
{
    static constexpr const char* NAME = "gameItemDecorationEvent";
    static constexpr const char* ALIAS = "ItemDecorationEvent";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ItemDecorationEvent, 0x50);
} // namespace game
using ItemDecorationEvent = game::ItemDecorationEvent;
} // namespace RED4ext
