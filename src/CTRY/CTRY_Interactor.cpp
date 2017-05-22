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

CTRY_Interactor::~CTRY_Interactor()
{
    //Destructor if needed
}

bool CTRY_Interactor::updateCountryResources(Country country, 
                                             CountryChangeResources changeResource)
{
    if (!country || !changeResources){
        return false;
    }
    
    CTRY_Base changeCountry;

    switch(country){
        case GREAT_BRITAIN:
            changeCountry = CTRY_GreatBritain::getInstance();
            break;
        case FRANCE:
            changeCountry = CTRY_GreatBritain::getInstance();
            break;
        case RUSSIA:
            break;
        case AUSTRIA_HUNGARY:
            break;
        case ITALY:
            break;
        case SERBIA:
            break;
        default:
    }
    
    
}
