/*
 * NAME: REND_DisplayManager.cpp
 *
 * COMMENTS:
 */

DisplayManager::DisplayManager(string title, int width, int height, bool vSync)
    : window(new Window(title, width, height, vSync),
      input(new InputManager(window))
{
}

DisplayManager::~DisplayManager()
{
}

void DisplayManager::init()
{
    input.init();
    window.init();
}

void DisplayManager::update()
{
    input.update();
    window.update();
}