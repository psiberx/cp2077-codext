#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::input { 
enum class ActionType : uint32_t
{
    BUTTON_PRESSED = 0,
    BUTTON_RELEASED = 1,
    BUTTON_HOLD_PROGRESS = 2,
    BUTTON_HOLD_COMPLETE = 3,
    BUTTON_MULTITAP_BEGIN_LAST = 4,
    BUTTON_MULTITAP_END_LAST = 5,
    AXIS_CHANGE = 6,
    RELATIVE_CHANGE = 7,
    TOGGLE_PRESSED = 8,
    TOGGLE_RELEASED = 9,
    REPEAT = 10,
};
} // namespace game::input
} // namespace RED4ext
