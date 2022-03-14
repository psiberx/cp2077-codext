#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/IUIObjectsLoaderSystemListener.hpp>

namespace RED4ext
{
struct UIObjectsLoaderSystemListener : game::ui::IUIObjectsLoaderSystemListener
{
    static constexpr const char* NAME = "UIObjectsLoaderSystemListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(UIObjectsLoaderSystemListener, 0x40);
} // namespace RED4ext
