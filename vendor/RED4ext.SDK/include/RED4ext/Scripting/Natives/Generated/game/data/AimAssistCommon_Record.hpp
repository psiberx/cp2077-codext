#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct AimAssistCommon_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAimAssistCommon_Record";
    static constexpr const char* ALIAS = "AimAssistCommon_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AimAssistCommon_Record, 0x88);
} // namespace game::data
using AimAssistCommon_Record = game::data::AimAssistCommon_Record;
} // namespace RED4ext
