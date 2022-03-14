#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/SoundComponentBase.hpp>

namespace RED4ext
{
namespace game { 
struct WeaponAudioComponent : game::audio::SoundComponentBase
{
    static constexpr const char* NAME = "gameWeaponAudioComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk180[0x1B0 - 0x180]; // 180
};
RED4EXT_ASSERT_SIZE(WeaponAudioComponent, 0x1B0);
} // namespace game
} // namespace RED4ext
