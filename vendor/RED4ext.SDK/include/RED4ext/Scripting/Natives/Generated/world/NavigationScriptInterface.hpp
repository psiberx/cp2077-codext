#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world { 
struct NavigationScriptInterface : IScriptable
{
    static constexpr const char* NAME = "worldNavigationScriptInterface";
    static constexpr const char* ALIAS = "NavigationSystem";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(NavigationScriptInterface, 0x48);
} // namespace world
using NavigationSystem = world::NavigationScriptInterface;
} // namespace RED4ext
