/*
 * NAME: CTRY_Interactor.h
 *
 * COMMENTS: 
 *
 */

#include "CTRY_Interactor.h"
#include "CTRY_GreatBritain.h"
#include "CTRY_France.h"

CTRY_Interactor::CTRY_Interactor()
{
    //Constructor if needed
}

CTRY_Interactor::~CTRY_Interactor()
{
    //Destructor if needed
}

bool CTRY_Interactor::updateCountryResources(Country country, 
                                             CountryChangeResources *changeResource)
{
    if (!country || !changeResource) return false;
    
    CTRY_Base *changeCountry = CTRY_Interactor::getChangedCountry(country);

    if (changeCountry == 0) return false;

    if (changeCountry->getGold() + changeResource->changeGold >= 0 &&
              changeCountry->getPopulation() + changeResource->changePopulation >= 0 &&
              changeCountry->getLandSize() + changeResource->changeLandSize >= 0 &&
              changeCountry->getGrain() + changeResource->changeGrain >= 0) {

        changeCountry->changeGold(changeResource->changeGold);
        changeCountry->changePopulation(changeResource->changePopulation);
        changeCountry->changeLandSize(changeResource->changeLandSize);
        changeCountry->changeGrain(changeResource->changeGrain);
        changeCountry->changeMorale(changeResource->changeMorale);
        return true;
    } else {
        return false;
    }
}

bool CTRY_Interactor::updateCountryState(Country country, bool isAtWar)
{
    CTRY_Base *changeCountry = CTRY_Interactor::getChangedCountry(country);
    
    if (changeCountry) {
        changeCountry->setCountryIsAtWar(isAtWar);
        return true;
    } else{
        return false;
    }
}

queue<Message *>* CTRY_Interactor::getChatHistory(Country countr)
{
    CTRY_Base *targetCountry = CTRY_Interactor::getChangedCountry(country);

    if (targetCountry) {
        return targetCountry->getChatHistory;
    } else {
        return 0;
    }
}

void CTRY_Interactor::clearChatHistory(Country country)
{
    CTRY_Base *targetCountry = CTRY_Interactor::getChangedCountry(country);

    if (targetCountry) {
        targetCountry->resetChatHistory();
    }
}

void CTRY_Interactor::addMessage(Country country, Message *chatMessage)
{
    CTRY_Base *targetCountry = CTRY_Interactor::getChangedCountry(country);

    if (targetCountry && chatMessage){
        targetCountry->addMessageToChat(chatMessage);
    }
}

CTRY_Base* CTRY_Interactor::getChangedCountry(Country country)
{
    switch(country){
        case GREAT_BRITAIN:
            return CTRY_GreatBritain::getInstance();
        case FRANCE:
            return CTRY_GreatBritain::getInstance();
        case RUSSIA:
            return 0;
        case AUSTRIA_HUNGARY:
            return 0;
        case ITALY:
            return 0;
        case SERBIA:
            return 0;
        default:
            return 0;
    }
}
