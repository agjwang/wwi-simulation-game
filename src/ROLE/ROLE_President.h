/*
 * NAME: ROLE_President.h
 *
 * COMMENTS: President role file for testing game logic (if required)
 *               Class expects asychronous events, ie user input, to change variables
 *               then for logic functions to synchronously check for updates
 *
 */

#ifndef __ROLE_President_h__
#define __ROLE_President_h__

#include "./CTRY/CTRY_Countries.h"

struct Budget{
    int homeFront;
    int army;
    int navy;
    int research;
};

class ROLE_President
{
    public:
        
        //Public constructors and deconstructor
                                ROLE_President();
                                ROLE_President(Country country, int totalBudget, 
                                                int population, int morale);
                               ~ROLE_President();

        //Accessor method for which nation's PM this is
        Country                 getCountry();
        
        //Accessor methods for current budget
        Budget*                 getCurrentBudget();
        void                    resetBudget(int newTotalBudget);

        //Mutators for surrender
        bool                    getWillSurrender();
        void                    setWillSurrender(bool surrender);

    private:
        int totalBudget; //A portion of total gold of a country
        int population;
        int morale;
        bool willSurrender;
        Budget *budget;
        Country nation;
};

#endif
