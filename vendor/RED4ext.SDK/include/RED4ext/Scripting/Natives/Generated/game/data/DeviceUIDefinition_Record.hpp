#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct DeviceUIDefinition_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDeviceUIDefinition_Record";
    static constexpr const char* ALIAS = "DeviceUIDefinition_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DeviceUIDefinition_Record, 0x50);
} // namespace game::data
using DeviceUIDefinition_Record = game::data::DeviceUIDefinition_Record;
} // namespace RED4ext
