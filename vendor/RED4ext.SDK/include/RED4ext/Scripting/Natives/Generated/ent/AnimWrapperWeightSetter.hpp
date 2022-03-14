#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimInputSetter.hpp>

namespace RED4ext
{
namespace ent { 
struct AnimWrapperWeightSetter : ent::AnimInputSetter
{
    static constexpr const char* NAME = "entAnimWrapperWeightSetter";
    static constexpr const char* ALIAS = "AnimWrapperWeightSetter";

    float value; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AnimWrapperWeightSetter, 0x50);
} // namespace ent
using AnimWrapperWeightSetter = ent::AnimWrapperWeightSetter;
} // namespace RED4ext
