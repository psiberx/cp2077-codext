#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntryState.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournalConditionType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest { 
struct JournalEntryState_ConditionType : quest::IJournalConditionType
{
    static constexpr const char* NAME = "questJournalEntryState_ConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> path; // 38
    game::JournalEntryState state; // 48
    bool inverted; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(JournalEntryState_ConditionType, 0x50);
} // namespace quest
} // namespace RED4ext
