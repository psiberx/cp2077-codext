#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace quest { 
struct SetLifePathRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "questSetLifePathRequest";
    static constexpr const char* ALIAS = NAME;

    TweakDBID lifePathID; // 58
};
RED4EXT_ASSERT_SIZE(SetLifePathRequest, 0x60);
} // namespace quest
} // namespace RED4ext
