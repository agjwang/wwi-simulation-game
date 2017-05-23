/*
 * NAME: CTRY_Interactor.h
 *
 * COMMENTS: 
 *
 */

#include "CTRY_Interacter.h"
#include "CTRY_GreatBritain.h"
#include "CTRY_France.h"

CTRY_Interacter::CTRY_Interacter()
{
    //Constructor if needed
}

CTRY_Interacter::~CTRY_Interacter()
{
    //Destructor if needed
}

bool CTRY_Interacter::updateCountryResources(Country country, 
                                             CountryChangeResources changeResource)
{
    if (!country || !changeResources) return false;
    
    CTRY_Base changeCountry = CTRY_Interacter::getChangedCountry(country);

    if (changeCountry == NULL) return false;

    if (changeCountry.getGold() + changeResource.changeGold >= 0 &&
              changeCountry.getPopulation() + changeResource.changePopulation >= 0 &&
              changeCountry.getLandSize() + changeResource.changeLandSize >= 0 &&
              changeCountry.getGrain() + changeResource.changeGrain >= 0){

        changeCountry.changeGold(changeResource.changeGold);
        changeCountry.changePopulation(changeResource.changePopulation);
        changeCountry.changeLandSize(changeResource.changeLandSize);
        changeCountry.changeGrain(changeResource.changeGrain);
        return true
    } else{
        return false;
    }
}

bool CTRY_Interacter::updateCountryState(Country country, bool isAtWar)
{
    CTRY_Base changeCountry = CTRY_Interacter::getChangedCountry(country);
    
    if (changeCountry){
        changeCountry.setCountryIsAtWar(isAtWar);
        return true;
    } else{
        return false;
    }
}

CTRY_Base& CTRY_Interacter::getChangedCountry(Country country)
{
    switch(country){
        case GREAT_BRITAIN:
            return CTRY_GreatBritain::getInstance();
        case FRANCE:
            return CTRY_GreatBritain::getInstance();
        case RUSSIA:
            return NULL;
        case AUSTRIA_HUNGARY:
            return NULL;
        case ITALY:
            return NULL;
        case SERBIA:
            return NULL;
        default:
            return NULL;
    }
}
