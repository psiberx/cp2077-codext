#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct CodexRecordPart_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCodexRecordPart_Record";
    static constexpr const char* ALIAS = "CodexRecordPart_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CodexRecordPart_Record, 0x50);
} // namespace game::data
using CodexRecordPart_Record = game::data::CodexRecordPart_Record;
} // namespace RED4ext
