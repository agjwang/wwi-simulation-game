/*
 *  NAME: REND_Window.cpp
 *  
 *  COMMENTS:
 */

#include "REND_Window.h"

REND_Window::REND_Window(string title, int width, int height) :
    title(title), width(width), height(height), windowHandle(NULL)
{
}

REND_Window::~REND_Window()
{
}

void REND_Window::init()
{
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    windowHandle = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);

    glfwMakeContextCurrent(windowHandle);
    glfwGetFramebufferSize(windowHandle, &screenWidth, &screenHeight);
    
    glewExperimental = GL_TRUE;
    glewInit();


    glViewport(0, 0, screenWidth, screenHeight);
    glEnable(GL_DEPTH_TEST);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

void REND_Window::update()
{
    glfwSwapBuffers(windowHandle);
    glfwPollEvents();
}


