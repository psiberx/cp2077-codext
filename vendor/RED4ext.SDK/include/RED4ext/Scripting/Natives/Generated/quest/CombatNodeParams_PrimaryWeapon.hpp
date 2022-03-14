#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CombatNodeParams.hpp>

namespace RED4ext
{
namespace quest { 
struct CombatNodeParams_PrimaryWeapon : quest::CombatNodeParams
{
    static constexpr const char* NAME = "questCombatNodeParams_PrimaryWeapon";
    static constexpr const char* ALIAS = NAME;

    bool unEquip; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(CombatNodeParams_PrimaryWeapon, 0x48);
} // namespace quest
} // namespace RED4ext
