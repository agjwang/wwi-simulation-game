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

int CTRY_Base::getMorale()
{
    return morale;
}

bool CTRY_Base::getCountryIsAtWar()
{
    return isAtWar;
}

queue<Message *>* CTRY_Base::getChatHistory()
{
    return chatHistory;
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

void CTRY_Base::setMorale(int newMorale)
{
    morale = newMorale;
}

void CTRY_Base::setCountryIsAtWar(bool newState)
{
    isAtWar = newState;
}

void CTRY_Base::addMessageToChat(Message *chatMessage)
{
    if (chatMessage) {
        chatHistory->push(chatMessage);
   
    }
    

    if (chatHistory->size > 100) {
        chatHistory->pop();
    }
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

bool CTRY_Base::changeMorale(int change)
{
    morale += change;
    if (morale < 0){
        morale = 0;
        return false;
    } else{
        return true;
    }
}

void CTRY_Base::resetChatHistory()
{
    delete chatHistory;
    chatHistory = new queue<Message *>;
}

CTRY_Base::CTRY_Base()
{
    gold = 100;
    population = 100;
    landSize = 100;
    grain = 100;
    isAtWar = false;
    chatHistory = new queue<Message *>;
}

CTRY_Base::~CTRY_Base()
{
    delete chatHistory;
}
