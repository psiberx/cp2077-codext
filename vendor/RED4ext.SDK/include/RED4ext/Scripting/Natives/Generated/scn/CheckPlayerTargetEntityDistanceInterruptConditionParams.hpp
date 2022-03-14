#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckPlayerTargetEntityDistanceInterruptConditionParams
{
    static constexpr const char* NAME = "scnCheckPlayerTargetEntityDistanceInterruptConditionParams";
    static constexpr const char* ALIAS = NAME;

    float distance; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    game::EntityReference targetEntity; // 08
    EComparisonType comparisonType; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(CheckPlayerTargetEntityDistanceInterruptConditionParams, 0x48);
} // namespace scn
} // namespace RED4ext
