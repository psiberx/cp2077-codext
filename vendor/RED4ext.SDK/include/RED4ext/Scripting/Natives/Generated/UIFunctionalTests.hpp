#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct UIFunctionalTests : IScriptable
{
    static constexpr const char* NAME = "UIFunctionalTests";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x78 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(UIFunctionalTests, 0x78);
} // namespace RED4ext
