#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct AimAssistMagnetism_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAimAssistMagnetism_Record";
    static constexpr const char* ALIAS = "AimAssistMagnetism_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AimAssistMagnetism_Record, 0x78);
} // namespace game::data
using AimAssistMagnetism_Record = game::data::AimAssistMagnetism_Record;
} // namespace RED4ext
