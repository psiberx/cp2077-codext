#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIDirectorSchedule_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIDirectorSchedule_Record";
    static constexpr const char* ALIAS = "AIDirectorSchedule_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIDirectorSchedule_Record, 0x50);
} // namespace game::data
using AIDirectorSchedule_Record = game::data::AIDirectorSchedule_Record;
} // namespace RED4ext
