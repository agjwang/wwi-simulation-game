/*
 * NAME: ENG_MainGameLoop.h
 *
 * COMMENTS: Main game loop run to execute game logic and game flow
 */

#ifndef __ENG_MainGameLoop_h__
#define __ENG_MainGameLoop_h__

#include "ENG_Timer.h"
#include "ENG_GameEngine.h"

class ENG_MainGameLoop
{
    public:
    
        // Class constructor and destructor
                                 ENG_MainGameLoop();
        virtual                 ~ENG_MainGameLoop();

        // Basic game loop methods
        void                     init();
        void                     run();
        void                     cleanup();

    protected:

        // Methods needed to update and render game
        void                     getInput();
        void                     update();
        void                     render();

    private:

        ENG_Timer                timer;
        ENG_GameEngine           engine;
    
}

#endif
