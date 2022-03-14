#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/DeviceStateSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EntitySettings.hpp>

namespace RED4ext
{
namespace audio { 
struct DeviceSettings : audio::EntitySettings
{
    static constexpr const char* NAME = "audioDeviceSettings";
    static constexpr const char* ALIAS = NAME;

    audio::DeviceStateSettings deviceSettings; // 88
};
RED4EXT_ASSERT_SIZE(DeviceSettings, 0xB0);
} // namespace audio
} // namespace RED4ext
