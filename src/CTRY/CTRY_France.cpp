/*
 * NAME: CTRY_France.cpp
 *
 * COMMENTS:
 *
 */

#include "CTRY_France.h"

bool CTRY_France::instanceFlag = false;

CTRY_France* CTRY_France::instance = 0;

CTRY_France* CTRY_France::getInstance()
{
    if(!instanceFlag){
        instance = new CTRY_France();
        instanceFlag = true;
        return instance;
    } else{
        return instance;
    }
}

CTRY_France::CTRY_France()
{
    gold = 1000000;
    population = 38000000;
    landSize = 640000;
    grain = 1500;
    isAtWar = false;
    morale = 100;
    chatHistory = new queue<Message *>;
}

CTRY_France::~CTRY_France()
{
    instanceFlag = false;
    delete chatHistory;
}
