#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ThreatPositionProvider.hpp>

namespace RED4ext
{
namespace AI { 
struct ThreatLastKnownPositionProvider : AI::ThreatPositionProvider
{
    static constexpr const char* NAME = "AIThreatLastKnownPositionProvider";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ThreatLastKnownPositionProvider, 0xA0);
} // namespace AI
} // namespace RED4ext
