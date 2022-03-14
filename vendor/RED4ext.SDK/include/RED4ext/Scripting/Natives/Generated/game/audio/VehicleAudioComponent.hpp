#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/SoundComponentBase.hpp>

namespace RED4ext
{
namespace game::audio { 
struct VehicleAudioComponent : game::audio::SoundComponentBase
{
    static constexpr const char* NAME = "gameaudioVehicleAudioComponent";
    static constexpr const char* ALIAS = "vehicleAudioComponent";

    uint8_t unk180[0x190 - 0x180]; // 180
};
RED4EXT_ASSERT_SIZE(VehicleAudioComponent, 0x190);
} // namespace game::audio
using vehicleAudioComponent = game::audio::VehicleAudioComponent;
} // namespace RED4ext
