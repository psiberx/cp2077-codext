#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_GraphSlot.hpp>

namespace RED4ext
{
namespace anim { struct AnimGraph; }

namespace anim { 
struct AnimNode_GraphSlot_Test : anim::AnimNode_GraphSlot
{
    static constexpr const char* NAME = "animAnimNode_GraphSlot_Test";
    static constexpr const char* ALIAS = NAME;

    Ref<anim::AnimGraph> graph_TEST; // B0
    uint8_t unkC8[0x118 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(AnimNode_GraphSlot_Test, 0x118);
} // namespace anim
} // namespace RED4ext
