/*
 * NAME: CTRY_Base.h
 *
 * COMMENTS: Base country class for a standard country object
 *           Country classes will be data entities with no actual game logic
 */

#ifndef __CTRY_Base_h__
#define __CTRY_Base_h__

#include <queue>
#include <string>
#include "CTRY_Message.h"

class CTRY_Base
{
    public:

        // Class getter and setter methods
        int                     getGold();
        int                     getPopulation();
        int                     getLandSize();
        int                     getGrain();
        int                     getMorale();
        bool                    getCountryIsAtWar();
        queue<Message *>*       getChatHistory();

        void                    setGold(int newGold);
        void                    setPopulation(int newPopulation);
        void                    setLandSize(int newLandSize);
        void                    setGrain(int newGrain);
        void                    setMorale(int newMorale);
        void                    setCountryIsAtWar(bool newState);
        void                    addMessageToChat(Message *chatMessage);

        // Change parameter functions
        // Returns true if successful and false without changing parameters if failed
        bool                    changeGold(int change);
        bool                    changePopulation(int change);
        bool                    changeLandSize(int change);
        bool                    changeGrain(int change);
        bool                    changeMorale(int change);
        
        void                    resetChatHistory();

        virtual                ~CTRY_Base();

    protected:

        int gold;
        int population;
        int landSize;
        int grain;
        int morale;
        bool isAtWar;

        //Maximum of 100 messages stored per country at a time
        queue<Message *> *chatHistory;

    //private:
        // Class constructor and destructor
                                CTRY_Base();
};

#endif
