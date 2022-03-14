#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI { 
struct ITargetTrackingListener : IScriptable
{
    static constexpr const char* NAME = "AIITargetTrackingListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ITargetTrackingListener, 0x48);
} // namespace AI
} // namespace RED4ext
