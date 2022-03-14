#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ForceAttributeValueEvent : red::Event
{
    static constexpr const char* NAME = "gameuiForceAttributeValueEvent";
    static constexpr const char* ALIAS = "ForceAttributeValueEvent";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ForceAttributeValueEvent, 0x50);
} // namespace game::ui
using ForceAttributeValueEvent = game::ui::ForceAttributeValueEvent;
} // namespace RED4ext
