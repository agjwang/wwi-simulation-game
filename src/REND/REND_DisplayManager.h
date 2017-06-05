/*
 * NAME: REND_DisplayManager.h
 *
 * COMMENTS: Responsible for managing window and getting input from user
 */

#ifndef __REND_DisplayManager_h__
#define __REND_DisplayManager_h__

#include "../SYSUTIL/SYSUTIL_SystemIncludes.h"

#include "REND_Window.h"
#include "REND_InputManager.h"


class REND_DisplayManager
{

    public:

        // Class constructor and destructor
                                 DisplayManager(string title, int width,
                                         int height);
        virtual                 ~DisplayManager();

        // Methods to set up and update display manager
        void                     init();

        void                     update();
        
        void                     cleanup();

        bool                     isCloseRequested()
                                     { return window->isWindowCloseRequested(); };

    protected:

    private:
    
        Window                  *window;
        InputManager            *input;

};

#endif
