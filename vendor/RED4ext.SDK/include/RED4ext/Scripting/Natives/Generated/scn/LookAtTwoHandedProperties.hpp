#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn { 
struct LookAtTwoHandedProperties
{
    static constexpr const char* NAME = "scnLookAtTwoHandedProperties";
    static constexpr const char* ALIAS = NAME;

    float enableFactor; // 00
    float override; // 04
    int32_t mode; // 08
};
RED4EXT_ASSERT_SIZE(LookAtTwoHandedProperties, 0xC);
} // namespace scn
} // namespace RED4ext
