#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IQuestsSystem.hpp>

namespace RED4ext
{
namespace quest { 
struct QuestsSystem : quest::IQuestsSystem
{
    static constexpr const char* NAME = "questQuestsSystem";
    static constexpr const char* ALIAS = "QuestsSystem";

    uint8_t unk58[0x290 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(QuestsSystem, 0x290);
} // namespace quest
using QuestsSystem = quest::QuestsSystem;
} // namespace RED4ext
