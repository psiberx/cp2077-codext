#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct ToggleDoorOpenEvent : red::Event
{
    static constexpr const char* NAME = "vehicleToggleDoorOpenEvent";
    static constexpr const char* ALIAS = "VehicleToggleDoorOpenEvent";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ToggleDoorOpenEvent, 0x50);
} // namespace vehicle
using VehicleToggleDoorOpenEvent = vehicle::ToggleDoorOpenEvent;
} // namespace RED4ext
