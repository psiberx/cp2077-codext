#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/NodeRefConverterTaskDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct NodeRefToObjectTaskDefinition : AI::behavior::NodeRefConverterTaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorNodeRefToObjectTaskDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NodeRefToObjectTaskDefinition, 0x58);
} // namespace AI::behavior
} // namespace RED4ext
