#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_QuatEvaluator.hpp>

namespace RED4ext
{
namespace game { 
struct EffectParameter_QuatEvaluator_Value : game::IEffectParameter_QuatEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_QuatEvaluator_Value";
    static constexpr const char* ALIAS = NAME;

    Quaternion value; // 30
};
RED4EXT_ASSERT_SIZE(EffectParameter_QuatEvaluator_Value, 0x40);
} // namespace game
} // namespace RED4ext
