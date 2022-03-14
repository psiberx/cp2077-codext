#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/NPCEquipmentGroupEntry_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct NPCEquipmentItemPool_Record : game::data::NPCEquipmentGroupEntry_Record
{
    static constexpr const char* NAME = "gamedataNPCEquipmentItemPool_Record";
    static constexpr const char* ALIAS = "NPCEquipmentItemPool_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NPCEquipmentItemPool_Record, 0x50);
} // namespace game::data
using NPCEquipmentItemPool_Record = game::data::NPCEquipmentItemPool_Record;
} // namespace RED4ext
