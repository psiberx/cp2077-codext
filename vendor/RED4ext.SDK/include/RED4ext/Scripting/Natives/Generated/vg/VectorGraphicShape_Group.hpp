#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/vg/BaseVectorGraphicShape.hpp>

namespace RED4ext
{
namespace vg { struct BaseVectorGraphicShape; }

namespace vg { 
struct VectorGraphicShape_Group : vg::BaseVectorGraphicShape
{
    static constexpr const char* NAME = "vgVectorGraphicShape_Group";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<vg::BaseVectorGraphicShape>> childShapes; // C0
};
RED4EXT_ASSERT_SIZE(VectorGraphicShape_Group, 0xD0);
} // namespace vg
} // namespace RED4ext
