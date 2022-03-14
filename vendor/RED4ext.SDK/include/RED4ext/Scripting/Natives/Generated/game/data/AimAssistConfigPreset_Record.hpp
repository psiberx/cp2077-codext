#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct AimAssistConfigPreset_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAimAssistConfigPreset_Record";
    static constexpr const char* ALIAS = "AimAssistConfigPreset_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AimAssistConfigPreset_Record, 0x60);
} // namespace game::data
using AimAssistConfigPreset_Record = game::data::AimAssistConfigPreset_Record;
} // namespace RED4ext
