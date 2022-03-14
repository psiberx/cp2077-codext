#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct AudioAttractAreaNodeInstance : world::TriggerAreaNodeInstance
{
    static constexpr const char* NAME = "worldAudioAttractAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x140 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(AudioAttractAreaNodeInstance, 0x140);
} // namespace world
} // namespace RED4ext
