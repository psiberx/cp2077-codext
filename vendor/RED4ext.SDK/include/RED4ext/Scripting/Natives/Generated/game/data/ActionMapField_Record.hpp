#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct ActionMapField_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataActionMapField_Record";
    static constexpr const char* ALIAS = "ActionMapField_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ActionMapField_Record, 0x50);
} // namespace game::data
using ActionMapField_Record = game::data::ActionMapField_Record;
} // namespace RED4ext
