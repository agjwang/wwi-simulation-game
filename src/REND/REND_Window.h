/*
 *  NAME: REND_Window.h
 *
 *  COMMENTS: Creates and updates window to render to screen
 */

#ifndef __REND_Window_h__
#define __REND_Window_h__

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "../SYSUTIL/SYSUTIL_SystemIncludes.h"

class REND_Window 
{

    public:

        // Class constructor and destructor
                                 Window(string title, int width, int height)

        virtual                 ~Window();

        // Methods to set up and update window
        void                     init();
        
        void                     update();

        void                     cleanup();

        bool                     isWindowCloseRequested()
                                    { return glfwWindowShouldClose(windowHandle); };

        GLFWwindow              *getWindowHandle()
                                    { return windowHandle; };
        
    protected:

    private:

        string                   title;
        int                      width;
        int                      height;

        int                      screenWidth;
        int                      screenHeight;

        GLFWwindow              *windowHandle;
};

#endif
