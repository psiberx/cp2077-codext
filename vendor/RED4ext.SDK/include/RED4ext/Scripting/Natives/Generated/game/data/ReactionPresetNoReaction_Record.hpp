#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ReactionPreset_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ReactionPresetNoReaction_Record : game::data::ReactionPreset_Record
{
    static constexpr const char* NAME = "gamedataReactionPresetNoReaction_Record";
    static constexpr const char* ALIAS = "ReactionPresetNoReaction_Record";

};
RED4EXT_ASSERT_SIZE(ReactionPresetNoReaction_Record, 0x68);
} // namespace game::data
using ReactionPresetNoReaction_Record = game::data::ReactionPresetNoReaction_Record;
} // namespace RED4ext
