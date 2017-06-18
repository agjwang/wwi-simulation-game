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
                                 LOGIC_BaseLogic(REND_InputManager input);
        virtual                 ~LOGIC_BaseLogic();

        // Methods to set up and update input manager
        // Set up and maintain callback functions
        virtual void             init();
        
        virtual void             update();

        virtual void             cleanup();

        // Pure virtual function that contains logic needed to parse updated input
        // in each derived class
        virtual void             applyLogic() = 0;

    protected:
       
        double                   mouseXPos;
        double                   mouseYPos; 
        MouseButton              mouseButton;
        KeyAction                mouseAction;
        int                      keyboardButton;
        KeyAction                keyboardAction;

    private:

        REND_InputManager        input;
};

#endif
