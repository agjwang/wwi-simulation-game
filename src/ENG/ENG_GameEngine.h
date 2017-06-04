/*
 * NAME: ENG_GameEngine.h
 *
 * COMMENTS: Game engine responsible for game logic 
 */

#ifndef __ENG_GameEngine_h__
#define __ENG_GameEngine_h__

class GameEngine
{
    public:
       
       // Class constructor and destructor
                                 ENG_GameEngine();
       virtual                  ~ENG_GameEngine();

       // Basic game engine methods
       void                      init();
       void                      update();
       void                      cleanup();

    protected:

    private:
}

#endif
