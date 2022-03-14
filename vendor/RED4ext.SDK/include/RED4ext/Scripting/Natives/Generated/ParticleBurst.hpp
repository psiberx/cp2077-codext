#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct ParticleBurst
{
    static constexpr const char* NAME = "ParticleBurst";
    static constexpr const char* ALIAS = NAME;

    float burstTime; // 00
    uint32_t spawnCount; // 04
    float spawnTimeRange; // 08
    float repeatTime; // 0C
};
RED4EXT_ASSERT_SIZE(ParticleBurst, 0x10);
} // namespace RED4ext
