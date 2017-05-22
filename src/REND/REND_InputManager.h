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

        void                     init();
        
        void                     update();

    protected:

    private:

}

#endif
