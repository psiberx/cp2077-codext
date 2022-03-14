#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterBool.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterCName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterDouble.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterIScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterInt.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterTweakDBID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterVector.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineStateContextParameters
{
    static constexpr const char* NAME = "gamestateMachineStateContextParameters";
    static constexpr const char* ALIAS = NAME;

    alignas(8) StaticArray<game::state::MachineActionParameterBool, 128> boolParameters; // 00
    alignas(8) StaticArray<game::state::MachineActionParameterInt, 128> intParameters; // C08
    alignas(8) StaticArray<game::state::MachineActionParameterFloat, 128> floatParameters; // 1810
    alignas(8) StaticArray<game::state::MachineActionParameterDouble, 128> doubleParameters; // 2418
    alignas(16) StaticArray<game::state::MachineActionParameterVector, 128> vectorParameters; // 3020
    alignas(8) StaticArray<game::state::MachineActionParameterCName, 128> CNameParameters; // 4830
    alignas(8) StaticArray<game::state::MachineActionParameterIScriptable, 128> IScriptableParameters; // 5438
    uint8_t unk6440[0x7448 - 0x6440]; // 6440
    alignas(8) StaticArray<game::state::MachineActionParameterTweakDBID, 128> tweakDBIDParameters; // 7448
};
RED4EXT_ASSERT_SIZE(MachineStateContextParameters, 0x8050);
} // namespace game::state
} // namespace RED4ext
