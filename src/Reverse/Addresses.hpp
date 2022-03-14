#pragma once

#include <cstdint>

namespace Reverse::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

constexpr uintptr_t InkSpawner_SpawnFromExternal = 0x1409C7710 - ImageBase;
}
