#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ISceneStorageCustomData.hpp>

namespace RED4ext
{
struct SceneCustomData_ShadowManager : ISceneStorageCustomData
{
    static constexpr const char* NAME = "SceneCustomData_ShadowManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x140 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(SceneCustomData_ShadowManager, 0x140);
} // namespace RED4ext
