#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorColor.hpp>

namespace RED4ext
{
struct CEvaluatorColorConst : IEvaluatorColor
{
    static constexpr const char* NAME = "CEvaluatorColorConst";
    static constexpr const char* ALIAS = NAME;

    Color value; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(CEvaluatorColorConst, 0x38);
} // namespace RED4ext
