/*
 * NAME: CTRY_Interactor.h
 *
 * COMMENTS: Responsible for interaction with Country class data models
 *           Able to modify due to input from Roles or AI roles
 *
 *           Alternative: Make back-end queriable with database, but then we would have to
 *                        integrate a db with the c++ code
 */

#ifndef __CTRY_Interactor_h__
#define __CTRY_Interactor_h__

#include "CTRY_Base.h"
#include "CTRY_Countries.h"

struct CountryChangeResources
{
        int changeGold;
        int changeGrain;
        int changeLandSize;
        int changePopulation;
        int changeMorale;
};

class CTRY_Interactor
{
        public:
            //Public constructor and destructor
                                CTRY_Interactor();
            virtual            ~CTRY_Interactor();

            //Public methods for changing data models, change assumed +increase, -decrease
            //Returns bool true/false= success/failed operation
            bool                updateCountryResources(Country country, 
                                                      CountryChangeResources *changeResources);
            bool                updateCountryState(Country country, bool isAtWar);

            queue<Message *>*   getChatHistory(Country country);
            void                clearChatHistory(Country country);
            void                addMessage(Country country, Message *chatMessage);

        private:
            CTRY_Base*          getChangedCountry(Country country);
};

#endif
