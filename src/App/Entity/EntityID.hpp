#pragma once

#include "Engine/Scripting/RTTIExpansion.hpp"

#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace App
{
class EntityID : public Engine::RTTIExpansion<EntityID, RED4ext::ent::EntityID>
{
public:
    inline static uint64_t ToHash(RED4ext::ent::EntityID& aID)
    {
        return aID.hash;
    }

    inline static RED4ext::ent::EntityID FromHash(uint64_t aHash)
    {
        return { aHash };
    }

private:
    friend Descriptor;

    inline static void OnExpand(Descriptor* aType, RED4ext::CRTTISystem*)
    {
        aType->AddFunction<&ToHash>("ToHash");
        aType->AddFunction<&FromHash>("FromHash");
    }
};
}
