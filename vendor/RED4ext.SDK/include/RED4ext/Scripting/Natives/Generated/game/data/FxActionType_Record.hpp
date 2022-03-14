#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct FxActionType_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataFxActionType_Record";
    static constexpr const char* ALIAS = "FxActionType_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FxActionType_Record, 0x58);
} // namespace game::data
using FxActionType_Record = game::data::FxActionType_Record;
} // namespace RED4ext
