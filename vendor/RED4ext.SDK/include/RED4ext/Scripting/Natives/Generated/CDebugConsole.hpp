#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IDebugConsole.hpp>

namespace RED4ext
{
struct CDebugConsole : IDebugConsole
{
    static constexpr const char* NAME = "CDebugConsole";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CDebugConsole, 0x8);
} // namespace RED4ext
