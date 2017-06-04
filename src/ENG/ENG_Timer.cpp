/*
 * NAME: ENG_Timer.cpp
 *
 * COMMENTS:
 */

#include "ENG_Timer.h"

ENG_Timer::ENG_Timer() : accumulatedTime(0.0), elapsedTime(0.0), UPS(30),
    updateInterval(1.0 / UPS), isRenderTime(false)
{
}

ENG_Timer::~ENG_Timer()
{
}

void ENG_Timer::init()
{
    prevLoopTime = system_clock::now();
    currLoopTime = system_clock::now();
}

void ENG_Timer::updateTime()
{
    elapsedTime = getElapsedTime();
    accumulatedTime += elapsedTime;
}

bool ENG_Timer::getIsUpdateTime()
{
    if (accumulatedTime >= updateInterval)
    {
        accumulatedTime -= updateInterval;
        return false;
    }
    isRenderTime = true;
    return true;
}

bool ENG_Timer::getIsRenderTime()
{
    if (isRenderTime)
    {
        isRenderTime = false;
        return true;
    }
    return false;
}

double ENG_Timer::getElapsedTime()
{
    currLoopTime = system_clock::now();
    duration<double> elapsed = currLoopTime - prevLoopTime;
    prevLoopTime = currLoopTime;
    return elapsed.count();
}

void ENG_Timer::cleanup()
{
}
