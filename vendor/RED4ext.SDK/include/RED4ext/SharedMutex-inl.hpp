#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/SharedMutex.hpp>
#endif

#include <cstdint>
#include <intrin.h>

#include <Windows.h>

RED4EXT_INLINE RED4ext::SharedMutex::SharedMutex()
    : state(0)
{
}

RED4EXT_INLINE bool RED4ext::SharedMutex::TryLock()
{
    return _InterlockedCompareExchange8(&state, -1, 0) == 0;
}

RED4EXT_INLINE void RED4ext::SharedMutex::Lock()
{
    int32_t loopCount = 0;
    while (true)
    {
        if (TryLock())
            break;

        ++loopCount;
        if (loopCount == 0x4000)
            loopCount = 0;
        else if (!(loopCount & 511))
            SwitchToThread();
    }
}

RED4EXT_INLINE void RED4ext::SharedMutex::Unlock()
{
    InterlockedExchange8(&state, 0);
}

RED4EXT_INLINE bool RED4ext::SharedMutex::TryLockShared()
{
    int32_t currentState = state;
    if (currentState != -1)
    {
        return _InterlockedCompareExchange8(&state, currentState + 1, currentState) == currentState;
    }
    return false;
}

RED4EXT_INLINE void RED4ext::SharedMutex::LockShared()
{
    int32_t loopCount = 0;
    while (true)
    {
        if (TryLockShared())
            break;

        ++loopCount;
        if (loopCount == 0x4000)
            loopCount = 0;
        else if (!(loopCount & 511))
            SwitchToThread();
    }
}

RED4EXT_INLINE void RED4ext::SharedMutex::UnlockShared()
{
    _InterlockedExchangeAdd8(&state, -1);
}

// --------------------------------------------
// -- support for lock_guard and shared_lock --
// --------------------------------------------

RED4EXT_INLINE bool RED4ext::SharedMutex::try_lock()
{
    return TryLock();
}

RED4EXT_INLINE void RED4ext::SharedMutex::lock()
{
    Lock();
}

RED4EXT_INLINE void RED4ext::SharedMutex::unlock()
{
    Unlock();
}

RED4EXT_INLINE bool RED4ext::SharedMutex::try_lock_shared()
{
    return TryLockShared();
}

RED4EXT_INLINE void RED4ext::SharedMutex::lock_shared()
{
    LockShared();
}

RED4EXT_INLINE void RED4ext::SharedMutex::unlock_shared()
{
    UnlockShared();
}
