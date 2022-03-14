#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalQuestMapPinBase.hpp>

namespace RED4ext
{
namespace game { 
struct JournalQuestPointOfInterestMapPin : game::JournalQuestMapPinBase
{
    static constexpr const char* NAME = "gameJournalQuestPointOfInterestMapPin";
    static constexpr const char* ALIAS = "JournalQuestPointOfInterestMapPin";

};
RED4EXT_ASSERT_SIZE(JournalQuestPointOfInterestMapPin, 0x110);
} // namespace game
using JournalQuestPointOfInterestMapPin = game::JournalQuestPointOfInterestMapPin;
} // namespace RED4ext
