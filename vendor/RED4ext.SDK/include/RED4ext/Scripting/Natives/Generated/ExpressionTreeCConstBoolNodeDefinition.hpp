#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ExpressionTreeCGeneralNodeDefinition.hpp>

namespace RED4ext
{
struct ExpressionTreeCConstBoolNodeDefinition : ExpressionTreeCGeneralNodeDefinition
{
    static constexpr const char* NAME = "ExpressionTreeCConstBoolNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    bool value; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(ExpressionTreeCConstBoolNodeDefinition, 0x38);
} // namespace RED4ext
