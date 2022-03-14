#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world { 
struct AudioSignpostTriggerNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldAudioSignpostTriggerNotifier";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AudioSignpostTriggerNotifier, 0xB8);
} // namespace world
} // namespace RED4ext
