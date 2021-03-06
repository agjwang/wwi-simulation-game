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

        //Accessor methods
        Country                 getCountry();
        int                     getTotalBudget();
        int                     getAllocatedBudget();
        int                     getPopulation();
        int                     getMorale();
        
        //Accessor methods for current budget
        Budget*                 getCurrentBudget();
        void                    resetBudget();
        bool                    changeBudgetHomeFront(int change);
        bool                    changeBudgetArmy(int change);
        bool                    changeBudgetNavy(int change);
        bool                    changeBudgetResearch(int change);

        //Update information for role
        void                    updateInformation(int newTotalBudget, 
                                                  int newPopulation, int newMorale);

        //Mutators for surrender
        bool                    getWillSurrender();
        void                    setWillSurrender(bool surrender);

    private:
        int totalBudget; //A portion of total gold of a country
        int allocatedBudget; //The portion of totalBudget that has already been allocated
        int population;
        int morale;
        bool willSurrender;
        Budget *budget;
        Country nation;
};

#endif
