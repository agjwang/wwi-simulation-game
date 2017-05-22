/*
 * NAME: CTRY_GreatBritain.cpp
 *
 * COMMENTS: 
 *
 */

#include "CTRY_GreatBritain.h"

CTRY_GreatBritain& CTRY_GreatBritain::getInstance()
{
    if (!classInstance){
        classInstance = new CTRY_GreatBritain();
        return &classInstance;
    }
    else{
        return &classInstance;
    }
}

CTRY_GreatBritain::CTRY_GreatBritain()
{
    gold = 1000000;
    population = 38000000;
    landSize = 210000;
    grain = 1000;
    isAtWar = false;
}

CTRY_GreatBritain::~CTRY_GreatBritain()
{
    gold = 0;
    population = 0;
    landSize = 0;
    grain = 0;
    isAtWar = false;
}
