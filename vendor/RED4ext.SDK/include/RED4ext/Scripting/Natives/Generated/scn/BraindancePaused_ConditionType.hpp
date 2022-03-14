#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IBraindanceConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneVersionCheck.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace scn { 
struct BraindancePaused_ConditionType : scn::IBraindanceConditionType
{
    static constexpr const char* NAME = "scnBraindancePaused_ConditionType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
    scn::SceneVersionCheck SceneVersion; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(BraindancePaused_ConditionType, 0x48);
} // namespace scn
} // namespace RED4ext
