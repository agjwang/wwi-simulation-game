/*
 * NAME: REND_InputManager.cpp
 *
 * COMMENTS:
 */

#include "REND_InputManager.h"

REND_InputManager::REND_InputManager(Window window)
{
    windowHandle = window.getWindowHandle();
}

REND_InputManager::~REND_InputManager()
{
}

void REND_InputManager::init()
{
    assert(!windowHandle);
    glfwSetKeyCallback(windowHandle, keyCallback);
    glfwSetCursorPosCallback(windowHandle, cursorPosCallback);
    glfwSetMouseButtonCallback(windowHandle, mouseButtonCallback);
}

void REND_InputManager::update()
{
}

void REND_InputManager::cleanup()
{
}

void REND_InputManager::keyCallback(GLFWwindow* window, int key, int scancode,
        int action, int mods)
{
    keyboardButton = key;

    switch (button)
    {
        case GLFW_MOUSE_BUTTON_LEFT:
            mouseButton = KEY_LEFT_BUTTON;
            break;
        case GLFW_MOUSE_BUTTON_MIDDLE:
            mouseButton = KEY_MIDDLE_BUTTON;
            break;
        case GLFW_MOUSE_BUTTON_RIGHT:
            mouseButton = KEY_RIGHT_BUTTON;
            break;
        default:
            mouseButton = KEY_NO_BUTTON;
            break;
    }
}

void REND_InputManager::cursorPosCallback(GLFWwindow* window, double xpos, double ypos)
{
    // TODO: Conversion factor to screen coordinates might be required
    mouseXPos = xpos;
    mouseYPos = ypos;
}

void REND_InputManager::mouseButtonCallback(GLFWwindow* window, int button,
        int action, int mods)
{
    switch (button)
    {
        case GLFW_MOUSE_BUTTON_LEFT:
            mouseButton = KEY_LEFT_BUTTON;
            break;
        case GLFW_MOUSE_BUTTON_MIDDLE:
            mouseButton = KEY_MIDDLE_BUTTON;
            break;
        case GLFW_MOUSE_BUTTON_RIGHT:
            mouseButton = KEY_RIGHT_BUTTON;
            break;
        default:
            mouseButton = KEY_NO_BUTTON;
            break;
    }

    switch (action)
    {
        case GLFW_PRESS:
            mouseAction = MOUSE_PRESS;
            break;
        case GLFW_REPEAT:
            mouseAction = MOUSE_HELD;
            break;
        case GLFW_RELEASE:
            mouseAction = MOUSE_RELEASE;
            break;
        default:
            mouseAction = MOUSE_NO_ACTION;
            break;
    }
}

void REND_InputManager::getMouseCoords(int &xpos, int &ypos)
{
    xpos = mouseXPos;
    ypos = mouseYPos;
}
