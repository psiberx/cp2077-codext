#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IActivityLogSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIActivityLogSystem";
    static constexpr const char* ALIAS = "IActivityLogSystem";

};
RED4EXT_ASSERT_SIZE(IActivityLogSystem, 0x48);
} // namespace game
using IActivityLogSystem = game::IActivityLogSystem;
} // namespace RED4ext
