#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/SceneCustomData_DistantShadowsCommon.hpp>

namespace RED4ext
{
struct SceneCustomData_RainMap : SceneCustomData_DistantShadowsCommon
{
    static constexpr const char* NAME = "SceneCustomData_RainMap";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk3E0[0xC81C0 - 0x3E0]; // 3E0
};
RED4EXT_ASSERT_SIZE(SceneCustomData_RainMap, 0xC81C0);
} // namespace RED4ext
