#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/UpdateBucketEnum.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TimeDilatable.hpp>

namespace RED4ext
{
namespace game { 
struct ItemObject : game::TimeDilatable
{
    static constexpr const char* NAME = "gameItemObject";
    static constexpr const char* ALIAS = "ItemObject";

    uint8_t unk260[0x2B8 - 0x260]; // 260
    UpdateBucketEnum updateBucket; // 2B8
    uint8_t unk2B9[0x2C0 - 0x2B9]; // 2B9
};
RED4EXT_ASSERT_SIZE(ItemObject, 0x2C0);
} // namespace game
using ItemObject = game::ItemObject;
} // namespace RED4ext
