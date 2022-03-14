#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct GameplayAbilityGroup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataGameplayAbilityGroup_Record";
    static constexpr const char* ALIAS = "GameplayAbilityGroup_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameplayAbilityGroup_Record, 0x50);
} // namespace game::data
using GameplayAbilityGroup_Record = game::data::GameplayAbilityGroup_Record;
} // namespace RED4ext
