#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IObjectCarrySystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIObjectCarrySystem";
    static constexpr const char* ALIAS = "IObjectCarrySystem";

};
RED4EXT_ASSERT_SIZE(IObjectCarrySystem, 0x48);
} // namespace game
using IObjectCarrySystem = game::IObjectCarrySystem;
} // namespace RED4ext
