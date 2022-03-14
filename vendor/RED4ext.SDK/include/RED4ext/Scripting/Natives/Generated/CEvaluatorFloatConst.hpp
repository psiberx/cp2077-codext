#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorFloat.hpp>

namespace RED4ext
{
struct CEvaluatorFloatConst : IEvaluatorFloat
{
    static constexpr const char* NAME = "CEvaluatorFloatConst";
    static constexpr const char* ALIAS = NAME;

    float value; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(CEvaluatorFloatConst, 0x38);
} // namespace RED4ext
