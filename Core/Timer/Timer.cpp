//
// Created by pylinskyi.k on 03.11.2023.
//

#include "SDL.h"
#include "Timer.h"

void Timer::Tick() {
    m_DeltaTime = (SDL_GetTicks() - m_LastTime) * (TARGET_FPS/1000.0f);

    if(m_DeltaTime > TARGET_DELTA_TIME)
        m_DeltaTime = TARGET_DELTA_TIME;

    m_LastTime = SDL_GetTicks();
}
