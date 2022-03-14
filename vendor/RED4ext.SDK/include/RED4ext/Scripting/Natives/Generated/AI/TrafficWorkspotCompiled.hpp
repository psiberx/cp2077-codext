#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficSpotCompiled.hpp>

namespace RED4ext
{
namespace AI { 
struct TrafficWorkspotCompiled : world::TrafficSpotCompiled
{
    static constexpr const char* NAME = "AITrafficWorkspotCompiled";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x80 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(TrafficWorkspotCompiled, 0x80);
} // namespace AI
} // namespace RED4ext
