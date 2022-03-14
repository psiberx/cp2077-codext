#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneGraphNode.hpp>

namespace RED4ext
{
namespace scn { 
struct AndNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnAndNode";
    static constexpr const char* ALIAS = NAME;

    uint32_t numInSockets; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AndNode, 0x50);
} // namespace scn
} // namespace RED4ext
