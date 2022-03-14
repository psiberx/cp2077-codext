#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct VehicleDestructibleWheel_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleDestructibleWheel_Record";
    static constexpr const char* ALIAS = "VehicleDestructibleWheel_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleDestructibleWheel_Record, 0x58);
} // namespace game::data
using VehicleDestructibleWheel_Record = game::data::VehicleDestructibleWheel_Record;
} // namespace RED4ext
