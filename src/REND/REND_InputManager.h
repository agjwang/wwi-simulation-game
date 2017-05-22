/*
 * NAME: REND_InputManager.h
 *
 * COMMENTS: Sets up callbacks to get user input
 */

#ifndef __REND_InputManager_h__
#define __REND_InputManager_h__

#include "REND_Window.h"

class InputManager
{

    public:

        // Class constructor and destructor
                                 InputManager(Window window);
        virtual                 ~InputManager();

        // Methods to set up and update input manager
        void                     init();
        
        void                     update();

        void                     cleanup();

    protected:

    private:

}

#endif
