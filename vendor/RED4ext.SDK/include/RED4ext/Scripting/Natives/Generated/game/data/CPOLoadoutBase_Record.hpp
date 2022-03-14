#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct CPOLoadoutBase_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCPOLoadoutBase_Record";
    static constexpr const char* ALIAS = "CPOLoadoutBase_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CPOLoadoutBase_Record, 0x50);
} // namespace game::data
using CPOLoadoutBase_Record = game::data::CPOLoadoutBase_Record;
} // namespace RED4ext
