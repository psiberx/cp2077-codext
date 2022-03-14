#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::projectile { 
enum class OnCollisionAction : uint32_t
{
    None = 0,
    Stop = 1,
    Bounce = 2,
    StopAndStick = 3,
    StopAndStickPerpendicular = 4,
    Pierce = 5,
};
} // namespace game::projectile
} // namespace RED4ext
