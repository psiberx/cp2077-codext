#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalQuestDescription : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalQuestDescription";
    static constexpr const char* ALIAS = "JournalQuestDescription";

    LocalizationString description; // 60
};
RED4EXT_ASSERT_SIZE(JournalQuestDescription, 0x88);
} // namespace game
using JournalQuestDescription = game::JournalQuestDescription;
} // namespace RED4ext
