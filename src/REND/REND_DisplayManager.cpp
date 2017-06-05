/*
 * NAME: REND_DisplayManager.cpp
 *
 * COMMENTS:
 */

#include "REND_DisplayManager.h"

REND_DisplayManager::REND_DisplayManager(string title, int width, int height)
    : window(new Window(title, width, height))
{
    input = new InputManager(*window);
}

REND_DisplayManager::~REND_DisplayManager()
{
}

void REND_DisplayManager::init()
{
    input->init();
    window->init();
}

void REND_DisplayManager::update()
{
    input->update();
    window->update();
}

void REND_DisplayManager::cleanup()
{
    input->cleanup();
    //window.cleanup();
}
