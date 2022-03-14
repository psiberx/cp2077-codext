#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ICollider.hpp>

namespace RED4ext
{
namespace physics { 
struct ColliderCapsule : physics::ICollider
{
    static constexpr const char* NAME = "physicsColliderCapsule";
    static constexpr const char* ALIAS = NAME;

    float radius; // 90
    float height; // 94
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(ColliderCapsule, 0xA0);
} // namespace physics
} // namespace RED4ext
