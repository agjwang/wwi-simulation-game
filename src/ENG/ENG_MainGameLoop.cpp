/*
 * NAME: ENG_MainGameLoop.cpp
 *
 * COMMENTS:
 */

ENG_MainGameLoop::ENG_MainGameLoop() : timer(new Timer()), engine(new GameEngine())
{
}

ENG_MainGameLoop::~ENG_MainGameLoop()
{
}

void ENG_MainGameLoop::init()
{
    engine.init();
}

void ENG_MainGameLoop::run()
{
    timer.updateTime();
    
    getInput(); 
    
    while (timer.getIsUpdateTime())
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

}

void ENG_MainGameLoop::getInput()
{

}

void ENG_MainGameLoop::update()
{
    engine.update();
}

void ENG_MainGameLoop:render()
{

}
