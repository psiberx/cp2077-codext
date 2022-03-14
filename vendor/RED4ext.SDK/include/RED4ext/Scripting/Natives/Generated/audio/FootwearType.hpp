#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { 
struct FootwearType : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFootwearType";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> itemNames; // 38
};
RED4EXT_ASSERT_SIZE(FootwearType, 0x48);
} // namespace audio
} // namespace RED4ext
