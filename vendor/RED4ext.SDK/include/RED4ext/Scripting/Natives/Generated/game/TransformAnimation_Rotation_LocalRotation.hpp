#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Rotation.hpp>

namespace RED4ext
{
namespace game { 
struct TransformAnimation_Rotation_LocalRotation : game::TransformAnimation_Rotation
{
    static constexpr const char* NAME = "gameTransformAnimation_Rotation_LocalRotation";
    static constexpr const char* ALIAS = NAME;

    Quaternion rotation; // 30
};
RED4EXT_ASSERT_SIZE(TransformAnimation_Rotation_LocalRotation, 0x40);
} // namespace game
} // namespace RED4ext
