/*
 * NAME: REND_DisplayManager.h
 *
 * COMMENTS: Responsible for managing window and getting input from user
 */

#ifndef __REND_DisplayManager_h__
#define __REND_DisplayManager_h__

#include "REND_Window.h"

class DisplayManager
{

    public:

        // Class constructor and destructor
                                 DisplayManager();
        virtual                 ~DisplayManager();

        // Methods to set up and update display manager
        void                     init();

        void                     update();

        bool                     isCloseRequested()
                                 { return window.isWindowCloseRequested() };

    protected:

    private:
    
        Window                  window;

}

#endif
