/*
 * NAME: ENG_Timer.h
 *
 * COMMENTS: Timer to synchronize getting inputs, updating, and rendering
 */

#ifndef __ENG_Timer_h__
#define __ENG_Timer_h__

class ENG_GameEngine
{
    public:
        
        // Updates the timer's internal accumulated and elapsed time
        // Called within the main game loop
        void                     updateTimer();

        // Returns true if game loop needs to update or render, false otherwise
        // If true, methods will update accumulatedTime/elapsedTime
        bool                     isUpdateTime();
        bool                     isRenderTime();

    protected:

    private:
        
        // Constants for updates per second and frames per second
        const int                UPS = 30;
        const int                FPS = 30;

        // Internal variables to track time changes/accumulation
        double                   accumulatedTime;
        double                   elapsedTime;
}

#endif
