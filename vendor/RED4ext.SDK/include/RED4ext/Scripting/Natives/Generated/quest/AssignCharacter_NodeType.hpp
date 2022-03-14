#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct AssignCharacter_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questAssignCharacter_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference characterRef; // 30
    game::EntityReference vehicleRef; // 68
    bool isPlayer; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
    CName slotName; // A8
    CName entryAnimName; // B0
    CName entrySlotName; // B8
    bool assign; // C0
    bool isInstant; // C1
    uint8_t unkC2[0xC8 - 0xC2]; // C2
};
RED4EXT_ASSERT_SIZE(AssignCharacter_NodeType, 0xC8);
} // namespace quest
} // namespace RED4ext
