#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CResource;

namespace world { 
struct StreamingSectorInplaceContent : CResource
{
    static constexpr const char* NAME = "worldStreamingSectorInplaceContent";
    static constexpr const char* ALIAS = NAME;

    DynArray<Ref<CResource>> inplaceResources; // 40
    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(StreamingSectorInplaceContent, 0x60);
} // namespace world
} // namespace RED4ext
