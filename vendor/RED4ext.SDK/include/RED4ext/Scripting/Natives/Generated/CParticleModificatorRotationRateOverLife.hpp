#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;

struct CParticleModificatorRotationRateOverLife : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorRotationRateOverLife";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorFloat> rotationRate; // 80
    bool modulate; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
};
RED4EXT_ASSERT_SIZE(CParticleModificatorRotationRateOverLife, 0x98);
} // namespace RED4ext
