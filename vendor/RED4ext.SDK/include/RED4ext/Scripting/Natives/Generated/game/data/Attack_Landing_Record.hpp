#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Attack_GameEffect_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Attack_Landing_Record : game::data::Attack_GameEffect_Record
{
    static constexpr const char* NAME = "gamedataAttack_Landing_Record";
    static constexpr const char* ALIAS = "Attack_Landing_Record";

    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(Attack_Landing_Record, 0x90);
} // namespace game::data
using Attack_Landing_Record = game::data::Attack_Landing_Record;
} // namespace RED4ext
