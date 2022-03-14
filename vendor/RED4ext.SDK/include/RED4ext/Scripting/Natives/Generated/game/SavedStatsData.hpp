#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game { struct StatModifierData_Deprecated; }

namespace game { 
struct SavedStatsData
{
    static constexpr const char* NAME = "gameSavedStatsData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::StatModifierData_Deprecated>> statModifiers; // 00
    DataBuffer modifiersBuffer; // 10
    DynArray<game::data::StatType> inactiveStats; // 38
    TweakDBID recordID; // 48
    uint32_t seed; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(SavedStatsData, 0x58);
} // namespace game
} // namespace RED4ext
