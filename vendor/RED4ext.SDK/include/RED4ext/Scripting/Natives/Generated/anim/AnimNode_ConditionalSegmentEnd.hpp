#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_ConditionalSegmentEnd : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ConditionalSegmentEnd";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0xA8 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_ConditionalSegmentEnd, 0xA8);
} // namespace anim
} // namespace RED4ext
