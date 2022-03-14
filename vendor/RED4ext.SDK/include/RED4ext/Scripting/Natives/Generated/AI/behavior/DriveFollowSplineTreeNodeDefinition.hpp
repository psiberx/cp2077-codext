#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DriveTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior { 
struct DriveFollowSplineTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveFollowSplineTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> useKinematic; // 40
    Handle<AI::ArgumentMapping> needDriver; // 50
    Handle<AI::ArgumentMapping> spline; // 60
    Handle<AI::ArgumentMapping> secureTimeOut; // 70
    Handle<AI::ArgumentMapping> backwards; // 80
    Handle<AI::ArgumentMapping> reverse; // 90
    Handle<AI::ArgumentMapping> closest; // A0
    Handle<AI::ArgumentMapping> forcedStartSpeed; // B0
    Handle<AI::ArgumentMapping> stopAtPathEnd; // C0
    Handle<AI::ArgumentMapping> keepDistanceParamBool; // D0
    Handle<AI::ArgumentMapping> keepDistanceParamCompanion; // E0
    Handle<AI::ArgumentMapping> keepDistanceParamDistance; // F0
    Handle<AI::ArgumentMapping> rubberBandingBool; // 100
    Handle<AI::ArgumentMapping> rubberBandingTargetRef; // 110
    Handle<AI::ArgumentMapping> rubberBandingMinDistance; // 120
    Handle<AI::ArgumentMapping> rubberBandingMaxDistance; // 130
    Handle<AI::ArgumentMapping> rubberBandingStopAndWait; // 140
    Handle<AI::ArgumentMapping> rubberBandingTeleportToCatchUp; // 150
};
RED4EXT_ASSERT_SIZE(DriveFollowSplineTreeNodeDefinition, 0x160);
} // namespace AI::behavior
} // namespace RED4ext
