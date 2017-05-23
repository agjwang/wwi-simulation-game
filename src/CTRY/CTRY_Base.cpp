/*
 * NAME: CtRY_Base.cpp
 *
 * COMMENTS:
 *
 */

#include "CTRY_Base.h"

int CTRY_Base::getGold()
{
    return gold;
}

int CTRY_Base::getPopulation()
{
    return population;
}

int CTRY_Base::getLandSize()
{
    return landSize;
}

int CTRY_Base::getGrain()
{
    return grain;
}

bool CTRY_Base::getCountryIsAtWar()
{
    return isAtWar;
}

void CTRY_Base::setGold(int newGold)
{
    gold = newGold;
}

void CTRY_Base::setPopulation(int newPopulation)
{
    population = newPopulation;
}

void CTRY_Base::setLandSize(int newLandSize)
{
    landSize = newLandSize;
}

void CTRY_Base::setGrain(int newGrain)
{
    grain = newGrain;
}

void CTRY_Base::setCountryIsAtWar(bool newState)
{
    isAtWar = newState;
}

bool CTRY_Base::changeGold(int change)
{
    if (gold+change >= 0){
        gold += change;
        return true;
    } else{
        return false;
    }
}

bool CTRY_Base::changePopulation(int change)
{
    if (population+change >= 0){
        population += change;
        return true;
    } else{
        return false;
    }
}

bool CTRY_Base::changeLandSize(int change)
{
    if (landSize+change >= 0){
        landSize += change;
        return true;
    } else{
        return false;
    }
}

bool CTRY_Base::changeGrain(int change)
{
    if (grain+change >= 0){
        grain += change;
        return true;
    } else{
        return false;
    }
}

CTRY_Base::CTRY_Base()
{
    gold = 100;
    population = 100;
    landSize = 100;
    grain = 100;
    isAtWar = false;
}

CTRY_Base::~CTRY_Base()
{

}
