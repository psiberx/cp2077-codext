#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct NPCEquipmentGroupEntry_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataNPCEquipmentGroupEntry_Record";
    static constexpr const char* ALIAS = "NPCEquipmentGroupEntry_Record";

};
RED4EXT_ASSERT_SIZE(NPCEquipmentGroupEntry_Record, 0x48);
} // namespace game::data
using NPCEquipmentGroupEntry_Record = game::data::NPCEquipmentGroupEntry_Record;
} // namespace RED4ext
