#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::interactions::vis { 
enum class EVisualizerActivityState : uint32_t
{
    None = 0,
    Visible = 1,
    Available = 2,
    Active = 3,
};
} // namespace game::interactions::vis
using EVisualizerActivityState = game::interactions::vis::EVisualizerActivityState;
} // namespace RED4ext
