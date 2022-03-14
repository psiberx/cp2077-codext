#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IBaseCondition.hpp>

namespace RED4ext
{
namespace quest { 
struct Condition : quest::IBaseCondition
{
    static constexpr const char* NAME = "questCondition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(Condition, 0x38);
} // namespace quest
} // namespace RED4ext
