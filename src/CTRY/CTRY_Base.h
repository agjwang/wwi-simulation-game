/*
 * NAME: CTRY_Base.h
 *
 * COMMENTS: Base country class for a standard country object
 *           Country classes will be data entities with no actual game logic
 */

#ifndef __CTRY_Base_h__
#define __CTRY_Base_h__

class CTRY_Base
{
    public:

        // Class constructor and destructor
                                CTRY_Base();
        virtual                ~CTRY_Base();

        // Class getter and setter methods
        int                     getGold();
        int                     getPopulation();
        int                     getLandSize();
        int                     getResources();

        void                    setGold(int newGold);
        void                    setPopulation(int newPopulation);
        void                    setLandSize(int newLandSize);
        void                    setResources(int newResources);

    protected:
        int gold;
        int population;
        int landSize;
        int resources;
    
    private:
};

#endif
