/*
 * NAME: CTRY_GreatBritain.cpp
 *
 * COMMENTS: 
 *
 */

#include "CTRY_GreatBritain.h"

bool CTRY_GreatBritain::instanceFlag = false;

CTRY_GreatBritain* CTRY_GreatBritain::instance = 0;

CTRY_GreatBritain* CTRY_GreatBritain::getInstance()
{
    if (!instanceFlag){
        instance = new CTRY_GreatBritain();
        instanceFlag = true;
        return instance;
    } else{
        return instance;
    }
}

CTRY_GreatBritain::CTRY_GreatBritain()
{
    gold = 1000000;
    population = 38000000;
    landSize = 210000;
    grain = 1000;
    isAtWar = false;
    morale = 100;
}

CTRY_GreatBritain::~CTRY_GreatBritain()
{
    instanceFlag = false;
}
