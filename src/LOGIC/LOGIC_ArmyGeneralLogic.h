/*
 * NAME: LOGIC_ArmyGeneralLogic.h
 *
 * COMMENTS: Logic for army general's role
 */

#ifndef __LOGIC_ArmyGeneralLogic_h__
#define __LOGIC_ArmyGeneralLogic_h__

#include "../SYSUTIL/SYSUTIL_SystemIncludes.h"

class LOGIC_ArmyGeneralLogic : public LOGIC_BaseLogic
{

    public:

        // Class constructor and destructor
                                 LOGIC_ArmyGeneralLogic(REND_InputManager input);
        virtual                 ~LOGIC_ArmyGeneralLogic();

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
