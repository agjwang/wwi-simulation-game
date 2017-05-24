/*
 * NAME: CTRY_Interacter.h
 *
 * COMMENTS: Responsible for interaction with Country class data models
 *           Able to modify due to input from Roles or AI roles
 *
 *           Alternative: Make back-end queriable with database, but then we would have to
 *                        integrate a db with the c++ code
 */

#ifndef __CTRY_Interacter_h__
#define __CTRY_Interacter_h__

#include "CTRY_Base.h"

enum Country
{
        GREAT_BRITAIN,
        FRANCE,
        GERMANY,
        RUSSIA,
        AUSTRIA_HUNGARY,
        ITALY,
        SERBIA
};

struct CountryChangeResources
{
        int changeGold;
        int changeGrain;
        int changeLandSize;
        int changePopulation;
};

class CTRY_Interacter
{
        public:
            //Public constructor and destructor
                                CTRY_Interacter();
            virtual            ~CTRY_Interacter();

            //Public methods for changing data models, change assumed +increase, -decrease
            //Returns bool true/false= success/failed operation
            bool                updateCountryResources(Country country, 
                                                      CountryChangeResources *changeResources);
            bool                updateCountryState(Country country, bool isAtWar);

        private:
            CTRY_Base*          getChangedCountry(Country country);
};

#endif
