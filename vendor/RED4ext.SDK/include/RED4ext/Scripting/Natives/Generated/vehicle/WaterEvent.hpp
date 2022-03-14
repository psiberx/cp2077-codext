#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct WaterEvent : red::Event
{
    static constexpr const char* NAME = "vehicleWaterEvent";
    static constexpr const char* ALIAS = "VehicleWaterEvent";

    bool isInWater; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(WaterEvent, 0x48);
} // namespace vehicle
using VehicleWaterEvent = vehicle::WaterEvent;
} // namespace RED4ext
