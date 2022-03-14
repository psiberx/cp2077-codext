#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { 
struct GroupingLimitMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioGroupingLimitMetadata";
    static constexpr const char* ALIAS = NAME;

    float limit; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(GroupingLimitMetadata, 0x40);
} // namespace audio
} // namespace RED4ext
