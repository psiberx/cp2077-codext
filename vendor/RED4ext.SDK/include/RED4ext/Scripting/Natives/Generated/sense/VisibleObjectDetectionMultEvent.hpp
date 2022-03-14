#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense { 
struct VisibleObjectDetectionMultEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibleObjectDetectionMultEvent";
    static constexpr const char* ALIAS = "VisibleObjectDetectionMultEvent";

    float multiplier; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(VisibleObjectDetectionMultEvent, 0x48);
} // namespace sense
using VisibleObjectDetectionMultEvent = sense::VisibleObjectDetectionMultEvent;
} // namespace RED4ext
