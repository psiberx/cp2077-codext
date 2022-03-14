#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/PhysicsParticleInitializer.hpp>

namespace RED4ext
{
struct SpawnSphereEvaluator : PhysicsParticleInitializer
{
    static constexpr const char* NAME = "SpawnSphereEvaluator";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x78 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(SpawnSphereEvaluator, 0x78);
} // namespace RED4ext
