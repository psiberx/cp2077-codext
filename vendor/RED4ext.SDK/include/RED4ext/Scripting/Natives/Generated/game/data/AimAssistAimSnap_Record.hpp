#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct AimAssistAimSnap_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAimAssistAimSnap_Record";
    static constexpr const char* ALIAS = "AimAssistAimSnap_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AimAssistAimSnap_Record, 0x88);
} // namespace game::data
using AimAssistAimSnap_Record = game::data::AimAssistAimSnap_Record;
} // namespace RED4ext
