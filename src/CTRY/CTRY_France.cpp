/*
 * NAME: CTRY_France.cpp
 *
 * COMMENTS:
 *
 */

#include "CTRY_France.h"

CTRY_France& CTRY_France::getInstance()
{
    if (!classInstance){
        classInstance = new CTRY_France();
        return &classInstance;
    } else{
        return &classInstance;
    }
}

CTRY_France::CTRY_France()
{
    gold = 1000000;
    population = 38000000;
    landSize = 640000;
    grain = 1500;
    isAtWar = false;
}

CTRY_France::~CTRY_France()
{

}
