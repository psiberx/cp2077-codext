#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PhotoModeLastInputDeviceEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotoModeLastInputDeviceEvent";
    static constexpr const char* ALIAS = "PhotoModeLastInputDeviceEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PhotoModeLastInputDeviceEvent, 0x48);
} // namespace game::ui
using PhotoModeLastInputDeviceEvent = game::ui::PhotoModeLastInputDeviceEvent;
} // namespace RED4ext
