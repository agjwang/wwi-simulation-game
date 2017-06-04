/*
 * NAME: ENG_Timer.h
 *
 * COMMENTS: Timer to synchronize getting inputs, updating, and rendering
 */

#ifndef __ENG_Timer_h__
#define __ENG_Timer_h__

#include <chrono>
#include <iosfwd>

using namespace std::chrono;

class Timer
{
    public:
        
        // Class constructor and destructor
                                 Timer();
        virtual                 ~Timer();

        // Updates the timer's internal accumulated and elapsed time
        // Called within the main game loop
        void                     updateTime();

        // Returns true if game loop needs to update or render, false otherwise
        // If true, methods will update accumulatedTime/elapsedTime
        bool                     getIsUpdateTime();
        bool                     getIsRenderTime();

    protected:

    private:
        
        double                   getElapsedTime();

        // Constants for updates per second and frames per second
        const int                UPS;
        double                   updateInterval;

        // Flag for when it is time to render
        bool                     isRenderTime;

        // Internal variables to track time changes/accumulation
        double                   accumulatedTime;
        double                   elapsedTime;
        
        time_point<system_clock> prevLoopTime;
        time_point<system_clock> currLoopTime;
        
};

#endif
