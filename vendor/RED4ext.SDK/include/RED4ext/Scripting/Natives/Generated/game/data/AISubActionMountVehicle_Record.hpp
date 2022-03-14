#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionMountVehicle_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionMountVehicle_Record";
    static constexpr const char* ALIAS = "AISubActionMountVehicle_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionMountVehicle_Record, 0x58);
} // namespace game::data
using AISubActionMountVehicle_Record = game::data::AISubActionMountVehicle_Record;
} // namespace RED4ext
