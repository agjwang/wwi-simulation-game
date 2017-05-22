/*
 * NAME: ENG_Timer.cpp
 *
 * COMMENTS:
 */

Timer::Timer() : accumulatedTime(0.0), elapsedTime(0.0)
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
    accumulatedTime += elapsedTime();

}

bool Timer::isUpdateTime()
{
    return false;
}

bool Timer::isRenderTime()
{
    return false;
}

double Timer::getElapsedTime()
{
    currLoopTime = system_clock::now();
    duration<double> elapsed = currLoopTime - prevLoopTime;
    prevLoopTime = system_clock::now();
    return elapsed.count();
}
