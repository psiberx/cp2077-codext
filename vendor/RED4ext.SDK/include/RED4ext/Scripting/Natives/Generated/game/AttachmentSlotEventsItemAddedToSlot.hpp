#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AttachmentSlotEventsItemAddedToSlotBase.hpp>

namespace RED4ext
{
namespace game { 
struct AttachmentSlotEventsItemAddedToSlot : game::AttachmentSlotEventsItemAddedToSlotBase
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsItemAddedToSlot";
    static constexpr const char* ALIAS = "ItemAddedToSlot";

};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsItemAddedToSlot, 0x68);
} // namespace game
using ItemAddedToSlot = game::AttachmentSlotEventsItemAddedToSlot;
} // namespace RED4ext
