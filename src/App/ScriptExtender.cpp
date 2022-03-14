#include "ScriptExtender.hpp"
#include "App/Entity/EntityID.hpp"
#include "App/Ink/InkSpawnExternalPatch.hpp"
#include "Engine/Scripting/RTTIRegistrar.hpp"

#ifdef PLAYGROUND
#include "Playground/Playground.hpp"
#endif

void App::ScriptExtender::OnRegister()
{
    Register<InkSpawnExternalPatch>();

    #ifdef PLAYGROUND
    Register<Playground>();
    #endif
}

void App::ScriptExtender::OnBootstrap()
{
    Engine::RTTIRegistrar::RegisterPending();
}
