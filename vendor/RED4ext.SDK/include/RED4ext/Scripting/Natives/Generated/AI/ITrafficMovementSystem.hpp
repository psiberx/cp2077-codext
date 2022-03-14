#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI { 
struct ITrafficMovementSystem : game::IGameSystem
{
    static constexpr const char* NAME = "AIITrafficMovementSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ITrafficMovementSystem, 0x48);
} // namespace AI
} // namespace RED4ext
