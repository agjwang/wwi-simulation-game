/*
 * NAME: ENG_Timer.cpp
 *
 * COMMENTS:
 */

Timer::Timer() : accumulatedTime(0.0), elapsedTime(0.0),
    updateInterval(1.0 / UPS), isRenderTime(false)
{
    prevLoopTime = system_clock::now();
    currLoopTime = system_clock::now();
}

Timer::~Timer()
{
}

void Timer::updateTime()
{
    elapsedTime = getElapsedTime();
    accumulatedTime += elapsedTime;
}

bool Timer::getIsUpdateTime()
{
    if (accumulatedTime >= updateInterval)
    {
        accumulatedTime -= updateInterval;
        return true;
    }
    isRenderTime = true;
    return false;
}

bool Timer::getIsRenderTime()
{
    if (isRenderTime)
    {
        isRenderTime = false;
        return true;
    }
    return false;
}

double Timer::getElapsedTime()
{
    currLoopTime = system_clock::now();
    duration<double> elapsed = currLoopTime - prevLoopTime;
    prevLoopTime = system_clock::now();
    return elapsed.count();
}
