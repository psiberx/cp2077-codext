#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimDurationFeature : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimDurationFeature";
    static constexpr const char* ALIAS = "AnimDurationFeature";

    float duration; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimDurationFeature, 0x48);
} // namespace anim
using AnimDurationFeature = anim::AnimDurationFeature;
} // namespace RED4ext
