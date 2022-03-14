#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ReplicatedInputSetterBase.hpp>

namespace RED4ext
{
namespace ent { 
struct ReplicatedInputSetterVector : ent::ReplicatedInputSetterBase
{
    static constexpr const char* NAME = "entReplicatedInputSetterVector";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x20 - 0x18]; // 18
    Vector4 value; // 20
};
RED4EXT_ASSERT_SIZE(ReplicatedInputSetterVector, 0x30);
} // namespace ent
} // namespace RED4ext
