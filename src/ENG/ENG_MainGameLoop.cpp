/*
 * NAME: ENG_MainGameLoop.cpp
 *
 * COMMENTS:
 */

ENG_MainGameLoop::ENG_MainGameLoop() : timer(new ENG_Timer()), 
    engine(new ENG_GameEngine())
{
}

ENG_MainGameLoop::~ENG_MainGameLoop()
{
}

void ENG_MainGameLoop::init()
{
    engine.init();
    timer.init();
}

void ENG_MainGameLoop::run()
{
    timer.updateTime();
    
    while (!timer.getIsUpdateTime())
    {
        getInput(); 
    }

    if (timer.getIsUpdateTime())
    {
        update();
    } 

    if (timer.getIsRenderTime())
    {
        render();
    }
}

void ENG_MainGameLoop::cleanup()
{
    engine.cleanup();
    timer.cleaup();
}

void ENG_MainGameLoop::getInput()
{
    // TODO
}

void ENG_MainGameLoop::update()
{
    engine.update();
}

void ENG_MainGameLoop::render()
{
    // TODO
}
