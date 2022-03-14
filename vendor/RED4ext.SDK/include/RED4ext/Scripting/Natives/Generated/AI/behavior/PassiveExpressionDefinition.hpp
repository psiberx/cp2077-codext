#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct PassiveExpressionDefinition : IScriptable
{
    static constexpr const char* NAME = "AIbehaviorPassiveExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PassiveExpressionDefinition, 0x40);
} // namespace AI::behavior
} // namespace RED4ext
