#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace game { 
struct ActionUnequipItemState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionUnequipItemState";
    static constexpr const char* ALIAS = NAME;

    TweakDBID slotId; // 28
    CName animFeatureNameRight; // 30
    CName animFeatureNameLeft; // 38
    float duration; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ActionUnequipItemState, 0x48);
} // namespace game
} // namespace RED4ext
