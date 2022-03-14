#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game { 
struct EffectExecutor_NewEffect_ReflectedVector : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_NewEffect_ReflectedVector";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EffectExecutor_NewEffect_ReflectedVector, 0x60);
} // namespace game
} // namespace RED4ext
