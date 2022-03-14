#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorFloat.hpp>

namespace RED4ext
{
struct CEvaluatorFloatStartEnd : IEvaluatorFloat
{
    static constexpr const char* NAME = "CEvaluatorFloatStartEnd";
    static constexpr const char* ALIAS = NAME;

    float start; // 30
    float end; // 34
};
RED4EXT_ASSERT_SIZE(CEvaluatorFloatStartEnd, 0x38);
} // namespace RED4ext
