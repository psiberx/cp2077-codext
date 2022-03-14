#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimDebuggerCommand.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimDebuggerCommand_IntOutputApplied : anim::IAnimDebuggerCommand
{
    static constexpr const char* NAME = "animAnimDebuggerCommand_IntOutputApplied";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x20 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(AnimDebuggerCommand_IntOutputApplied, 0x20);
} // namespace anim
} // namespace RED4ext
