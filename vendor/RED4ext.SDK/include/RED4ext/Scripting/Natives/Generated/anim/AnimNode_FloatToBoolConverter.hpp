#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BoolValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_FloatToBoolConverter : anim::AnimNode_BoolValue
{
    static constexpr const char* NAME = "animAnimNode_FloatToBoolConverter";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink inputNode; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatToBoolConverter, 0x68);
} // namespace anim
} // namespace RED4ext
