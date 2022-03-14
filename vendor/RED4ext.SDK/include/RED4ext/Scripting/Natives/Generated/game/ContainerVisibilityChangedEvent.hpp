#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct ContainerVisibilityChangedEvent : red::Event
{
    static constexpr const char* NAME = "gameContainerVisibilityChangedEvent";
    static constexpr const char* ALIAS = "ContainerVisibilityChangedEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ContainerVisibilityChangedEvent, 0x48);
} // namespace game
using ContainerVisibilityChangedEvent = game::ContainerVisibilityChangedEvent;
} // namespace RED4ext
