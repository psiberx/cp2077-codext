#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct VehicleTPPCameraParams_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleTPPCameraParams_Record";
    static constexpr const char* ALIAS = "VehicleTPPCameraParams_Record";

    uint8_t unk48[0xC8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleTPPCameraParams_Record, 0xC8);
} // namespace game::data
using VehicleTPPCameraParams_Record = game::data::VehicleTPPCameraParams_Record;
} // namespace RED4ext
