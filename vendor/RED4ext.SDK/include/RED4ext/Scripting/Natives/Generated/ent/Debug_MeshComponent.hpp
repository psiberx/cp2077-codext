#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct Debug_MeshComponent : ent::MeshComponent
{
    static constexpr const char* NAME = "entDebug_MeshComponent";
    static constexpr const char* ALIAS = NAME;

    CString filterName; // 1E0
    uint8_t unk200[0x430 - 0x200]; // 200
};
RED4EXT_ASSERT_SIZE(Debug_MeshComponent, 0x430);
} // namespace ent
} // namespace RED4ext
