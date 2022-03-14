#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct OnLootEvent : red::Event
{
    static constexpr const char* NAME = "gameOnLootEvent";
    static constexpr const char* ALIAS = "OnLootEvent";

};
RED4EXT_ASSERT_SIZE(OnLootEvent, 0x40);
} // namespace game
using OnLootEvent = game::OnLootEvent;
} // namespace RED4ext
