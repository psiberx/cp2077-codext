#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game { 
struct SynchronizeAttachmentSlotRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameSynchronizeAttachmentSlotRequest";
    static constexpr const char* ALIAS = "SynchronizeAttachmentSlotRequest";

    TweakDBID slotID; // 58
};
RED4EXT_ASSERT_SIZE(SynchronizeAttachmentSlotRequest, 0x60);
} // namespace game
using SynchronizeAttachmentSlotRequest = game::SynchronizeAttachmentSlotRequest;
} // namespace RED4ext
