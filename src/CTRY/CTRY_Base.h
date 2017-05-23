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

        // Class getter and setter methods
        int                     getGold();
        int                     getPopulation();
        int                     getLandSize();
        int                     getGrain();
        bool                    getCountryIsAtWar();

        void                    setGold(int newGold);
        void                    setPopulation(int newPopulation);
        void                    setLandSize(int newLandSize);
        void                    setGrain(int newGrain);
        void                    setCountryIsAtWar(bool newState);

        // Change parameter functions
        // Returns true if successful and false without changing parameters if failed
        bool                    changeGold(int change);
        bool                    changePopulation(int change);
        bool                    changeLandSize(int change);
        bool                    changeGrain(int change);

    private:

        int gold;
        int population;
        int landSize;
        int grain;
        bool isAtWar;

        // Class constructor and destructor
                                CTRY_Base();
        virtual                ~CTRY_Base();
};

#endif
