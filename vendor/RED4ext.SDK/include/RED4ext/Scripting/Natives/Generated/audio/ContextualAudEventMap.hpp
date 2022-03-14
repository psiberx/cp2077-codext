#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ContextualAudEventMapItem.hpp>

namespace RED4ext
{
namespace audio { 
struct ContextualAudEventMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioContextualAudEventMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::ContextualAudEventMapItem> contextualAudEventMapItems; // 38
};
RED4EXT_ASSERT_SIZE(ContextualAudEventMap, 0x48);
} // namespace audio
} // namespace RED4ext
