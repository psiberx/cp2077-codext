#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/OffsetMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PropId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events { 
struct AttachPropToPerformer : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsAttachPropToPerformer";
    static constexpr const char* ALIAS = NAME;

    scn::PropId propId; // 58
    scn::PerformerId performerId; // 5C
    CName slot; // 60
    scn::OffsetMode offsetMode; // 68
    uint8_t unk69[0x6C - 0x69]; // 69
    Vector3 customOffsetPos; // 6C
    uint8_t unk78[0x80 - 0x78]; // 78
    Quaternion customOffsetRot; // 80
};
RED4EXT_ASSERT_SIZE(AttachPropToPerformer, 0x90);
} // namespace scn::events
} // namespace RED4ext
