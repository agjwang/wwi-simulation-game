/*
 * NAME: LOGIC_PresidentLogic.h
 *
 * COMMENTS: Logic for president's role
 */

#ifndef __LOGIC_PresidentLogic_h__
#define __LOGIC_PresidentLogic_h__

#include "../SYSUTIL/SYSUTIL_SystemIncludes.h"

class LOGIC_PresidentLogic : public LOGIC_BaseLogic
{

    public:

        // Class constructor and destructor
                                 LOGIC_PresidentLogic(REND_InputManager input);
        virtual                 ~LOGIC_PresidentLogic();

        // Methods to set up and update input manager
        // Set up and maintain callback functions
        virtual void             init();
        
        virtual void             update();

        virtual void             cleanup();

        virtual void             applyLogic();

    protected:


    private:
};

#endif
