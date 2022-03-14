#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct StimType_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStimType_Record";
    static constexpr const char* ALIAS = "StimType_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StimType_Record, 0x58);
} // namespace game::data
using StimType_Record = game::data::StimType_Record;
} // namespace RED4ext
