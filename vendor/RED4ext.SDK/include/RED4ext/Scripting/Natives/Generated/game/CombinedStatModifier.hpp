#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierBase.hpp>

namespace RED4ext
{
namespace game { 
struct CombinedStatModifier : game::StatModifierBase
{
    static constexpr const char* NAME = "gameCombinedStatModifier";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CombinedStatModifier, 0x28);
} // namespace game
} // namespace RED4ext
