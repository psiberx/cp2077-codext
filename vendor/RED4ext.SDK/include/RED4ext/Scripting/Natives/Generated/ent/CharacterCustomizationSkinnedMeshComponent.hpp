#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/SkinnedMeshComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace ent { 
struct CharacterCustomizationSkinnedMeshComponent : ent::SkinnedMeshComponent
{
    static constexpr const char* NAME = "entCharacterCustomizationSkinnedMeshComponent";
    static constexpr const char* ALIAS = NAME;

    red::TagList tags; // 270
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationSkinnedMeshComponent, 0x280);
} // namespace ent
} // namespace RED4ext
