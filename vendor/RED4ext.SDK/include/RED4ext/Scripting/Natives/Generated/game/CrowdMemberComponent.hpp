#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct CrowdMemberComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameCrowdMemberComponent";
    static constexpr const char* ALIAS = "CrowdMemberComponent";

    uint8_t unk90[0x210 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(CrowdMemberComponent, 0x210);
} // namespace game
using CrowdMemberComponent = game::CrowdMemberComponent;
} // namespace RED4ext
