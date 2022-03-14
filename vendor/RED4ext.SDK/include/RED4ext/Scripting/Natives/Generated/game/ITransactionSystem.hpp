#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct ITransactionSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameITransactionSystem";
    static constexpr const char* ALIAS = "ITransactionSystem";

};
RED4EXT_ASSERT_SIZE(ITransactionSystem, 0x48);
} // namespace game
using ITransactionSystem = game::ITransactionSystem;
} // namespace RED4ext
