#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct TimeOfDayVisibilityResource : CResource
{
    static constexpr const char* NAME = "TimeOfDayVisibilityResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x88 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(TimeOfDayVisibilityResource, 0x88);
} // namespace RED4ext
