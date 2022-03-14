#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ResetStickersEvent : red::Event
{
    static constexpr const char* NAME = "gameuiResetStickersEvent";
    static constexpr const char* ALIAS = "ResetStickersEvent";

};
RED4EXT_ASSERT_SIZE(ResetStickersEvent, 0x40);
} // namespace game::ui
using ResetStickersEvent = game::ui::ResetStickersEvent;
} // namespace RED4ext
