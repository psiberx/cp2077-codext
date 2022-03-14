#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IDestructionPersistencySystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIDestructionPersistencySystem";
    static constexpr const char* ALIAS = "DestructionPersistencySystem";

};
RED4EXT_ASSERT_SIZE(IDestructionPersistencySystem, 0x48);
} // namespace game
using DestructionPersistencySystem = game::IDestructionPersistencySystem;
} // namespace RED4ext
