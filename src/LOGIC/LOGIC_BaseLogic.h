/*
 * NAME: LOGIC_BaseLogic.h
 *
 * COMMENTS: Interface for game each character's game logic that takes game input
 *           and calculates what needs to be changed
 */

#ifndef __LOGIC_BaseLogic_h__
#define __LOGIC_BaseLogic_h__

#include "../SYSUTIL/SYSUTIL_SystemIncludes.h"

#include "../REND/REND_InputManager.h"

class LOGIC_BaseLogic
{

    public:

        // Class constructor and destructor
                                 LOGIC_BaseLogic();
        virtual                 ~LOGIC_BaseLogic();

        // Methods to set up and update input manager
        // Set up and maintain callback functions
        virtual void             init();
        
        virtual void             update();

        virtual void             cleanup();

    protected:


    private:

        REND_InputManager       *input;
};

#endif
