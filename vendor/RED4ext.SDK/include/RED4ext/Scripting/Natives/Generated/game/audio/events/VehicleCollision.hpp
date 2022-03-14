#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events { 
struct VehicleCollision : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsVehicleCollision";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(VehicleCollision, 0x60);
} // namespace game::audio::events
} // namespace RED4ext
