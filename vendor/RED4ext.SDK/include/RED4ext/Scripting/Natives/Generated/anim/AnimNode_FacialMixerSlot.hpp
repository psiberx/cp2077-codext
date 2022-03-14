#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtAnimationDefinition.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_FacialMixerSlot : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FacialMixerSlot";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::LookAtAnimationDefinition> lookAtDefinitions; // 60
    uint8_t unk70[0x2E8 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(AnimNode_FacialMixerSlot, 0x2E8);
} // namespace anim
} // namespace RED4ext
