#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::input { 
struct ScriptListenerActionConsumer
{
    static constexpr const char* NAME = "gameinputScriptListenerActionConsumer";
    static constexpr const char* ALIAS = "ListenerActionConsumer";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ScriptListenerActionConsumer, 0x8);
} // namespace game::input
using ListenerActionConsumer = game::input::ScriptListenerActionConsumer;
} // namespace RED4ext
