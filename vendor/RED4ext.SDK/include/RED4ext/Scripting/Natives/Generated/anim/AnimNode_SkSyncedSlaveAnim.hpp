#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_SkSyncedSlaveAnim : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkSyncedSlaveAnim";
    static constexpr const char* ALIAS = NAME;

    CName syncTag; // D0
    uint8_t unkD8[0x118 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(AnimNode_SkSyncedSlaveAnim, 0x118);
} // namespace anim
} // namespace RED4ext
