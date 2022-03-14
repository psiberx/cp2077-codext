#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/LoopType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/BriefingSequencePlayerFunction.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/BriefingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace ink { struct UserData; }
namespace ink { struct WidgetLibraryResource; }

namespace quest { 
struct BriefingSequencePlayer_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questBriefingSequencePlayer_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::BriefingSequencePlayerFunction function; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    RaRef<ink::WidgetLibraryResource> briefingResource; // 40
    Handle<ink::UserData> userData; // 48
    CName audioEvent; // 58
    CName animationName; // 60
    CName startMarkerName; // 68
    CName endMarkerName; // 70
    ink::anim::LoopType loopType; // 78
    uint8_t unk79[0x7C - 0x79]; // 79
    quest::BriefingType briefingType; // 7C
};
RED4EXT_ASSERT_SIZE(BriefingSequencePlayer_NodeType, 0x80);
} // namespace quest
} // namespace RED4ext
