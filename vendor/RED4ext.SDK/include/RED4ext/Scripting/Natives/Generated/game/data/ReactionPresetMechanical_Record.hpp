#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ReactionPreset_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ReactionPresetMechanical_Record : game::data::ReactionPreset_Record
{
    static constexpr const char* NAME = "gamedataReactionPresetMechanical_Record";
    static constexpr const char* ALIAS = "ReactionPresetMechanical_Record";

};
RED4EXT_ASSERT_SIZE(ReactionPresetMechanical_Record, 0x68);
} // namespace game::data
using ReactionPresetMechanical_Record = game::data::ReactionPresetMechanical_Record;
} // namespace RED4ext
