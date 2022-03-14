#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world { struct TrafficPersistentResource; }

namespace world { 
struct TrafficPersistentNode : world::Node
{
    static constexpr const char* NAME = "worldTrafficPersistentNode";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::TrafficPersistentResource> resource; // 38
};
RED4EXT_ASSERT_SIZE(TrafficPersistentNode, 0x40);
} // namespace world
} // namespace RED4ext
