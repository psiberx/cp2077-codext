#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SpotSequenceCategory.hpp>

namespace RED4ext
{
namespace game { 
struct CategorySelectionProbability
{
    static constexpr const char* NAME = "gameCategorySelectionProbability";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::SpotSequenceCategory> probabilities; // 00
};
RED4EXT_ASSERT_SIZE(CategorySelectionProbability, 0x10);
} // namespace game
} // namespace RED4ext
