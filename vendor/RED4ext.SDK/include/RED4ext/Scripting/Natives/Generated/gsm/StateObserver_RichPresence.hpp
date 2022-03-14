#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/IStateObserver.hpp>

namespace RED4ext
{
namespace gsm { 
struct StateObserver_RichPresence : gsm::IStateObserver
{
    static constexpr const char* NAME = "gsmStateObserver_RichPresence";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x20 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(StateObserver_RichPresence, 0x20);
} // namespace gsm
} // namespace RED4ext
