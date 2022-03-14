#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>

namespace RED4ext
{
namespace AI { 
struct ArgumentEnumValue : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentEnumValue";
    static constexpr const char* ALIAS = NAME;

    int64_t defaultValue; // 48
    AI::ArgumentType type; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    CName enumClass; // 58
};
RED4EXT_ASSERT_SIZE(ArgumentEnumValue, 0x60);
} // namespace AI
} // namespace RED4ext
