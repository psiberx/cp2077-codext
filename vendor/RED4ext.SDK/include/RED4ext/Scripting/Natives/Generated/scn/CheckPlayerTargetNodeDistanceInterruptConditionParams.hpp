#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckPlayerTargetNodeDistanceInterruptConditionParams
{
    static constexpr const char* NAME = "scnCheckPlayerTargetNodeDistanceInterruptConditionParams";
    static constexpr const char* ALIAS = NAME;

    float distance; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    NodeRef targetNode; // 08
    EComparisonType comparisonType; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(CheckPlayerTargetNodeDistanceInterruptConditionParams, 0x18);
} // namespace scn
} // namespace RED4ext
