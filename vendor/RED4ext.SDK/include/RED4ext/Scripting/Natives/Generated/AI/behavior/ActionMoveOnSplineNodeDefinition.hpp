#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior { 
struct ActionMoveOnSplineNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionMoveOnSplineNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> spline; // 40
    Handle<AI::ArgumentMapping> strafingTarget; // 50
    Handle<AI::ArgumentMapping> movementType; // 60
    Handle<AI::ArgumentMapping> ignoreNavigation; // 70
    Handle<AI::ArgumentMapping> snapToTerrain; // 80
    Handle<AI::ArgumentMapping> rotateEntity; // 90
    Handle<AI::ArgumentMapping> startFromClosestPoint; // A0
    Handle<AI::ArgumentMapping> useStart; // B0
    Handle<AI::ArgumentMapping> useStop; // C0
    Handle<AI::ArgumentMapping> reverse; // D0
    uint8_t unkE0[0xF0 - 0xE0]; // E0
    Handle<AI::ArgumentMapping> isBackAndForth; // F0
    Handle<AI::ArgumentMapping> isInfinite; // 100
    Handle<AI::ArgumentMapping> numberOfLoops; // 110
    Handle<AI::ArgumentMapping> useOffMeshLinkReservation; // 120
};
RED4EXT_ASSERT_SIZE(ActionMoveOnSplineNodeDefinition, 0x130);
} // namespace AI::behavior
} // namespace RED4ext
