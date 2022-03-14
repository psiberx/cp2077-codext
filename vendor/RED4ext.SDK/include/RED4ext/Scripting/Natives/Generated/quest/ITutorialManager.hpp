#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace quest { 
struct ITutorialManager : game::IGameSystem
{
    static constexpr const char* NAME = "questITutorialManager";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ITutorialManager, 0x48);
} // namespace quest
} // namespace RED4ext
