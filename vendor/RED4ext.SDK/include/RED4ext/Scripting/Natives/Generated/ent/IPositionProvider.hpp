#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ent { 
struct IPositionProvider : IScriptable
{
    static constexpr const char* NAME = "entIPositionProvider";
    static constexpr const char* ALIAS = "IPositionProvider";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IPositionProvider, 0x50);
} // namespace ent
using IPositionProvider = ent::IPositionProvider;
} // namespace RED4ext
