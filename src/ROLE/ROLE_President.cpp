/*
 * NAME: ROLE_President.cpp
 *
 * COMMENTS: Implementation
 *
 */

#include "ROLE_President.h"

ROLE_President::ROLE_President()
{
    totalBudget = 0;
    populationn = 0;
    morale = 0;
    willSurrender = true;
    nation = 0;

    budget = new Budget{0, 0, 0, 0,};
}

ROLE_President::ROLE_President(Country country, int totalBudget, int population, int morale)
{
    nation = country;
    this->totalBudget = totalBudget;
    this->population = population;
    this->morale = morale;
    willSurrender = false;

    allocatedBudget = 0;
    budget = new Budget{0, 0, 0, 0};
}

ROLE_President::~ROLE_President()
{
    delete budget;
}

Country ROLE_President::getCountry()
{
    return nation;
}

Budget* ROLE_President::getCurrentBudget()
{
    return budget;
}

void ROLE_President::resetBudget()
{
    delete budget;
    budget = new Budget{0, 0, 0, 0};
    allocatedBudget = 0;
}

bool ROLE_President::changeBudgetHomeFront(int change)
{
    if (budget->homeFront + change >= 0 && allocatedBudget + change >= 0 
            && allocatedBudget + change <= totalBudget) {
        budget->homeFront += change;
        allocatedBudget += change;
        return true;
    } else {
        return false;
    }
}

bool ROLE_President::changeBudgetArmy(int change)
{
    if (budget->army + change >= 0 && allocatedBudget + change >= 0 
            && allocatedBudget + change <= totallBudget) {
        budget->army += change;
        allocatedBudget += change;
        return true;
    } else {
        return false;
    }
}

bool ROLE_President::changeBudgetNavy(int change)
{
    if (budget->navy + change >= 0 && allocatedBudget + change >= 0
            && allocatedBudget + change <= totalBudget) {
        budget->navy += change;
        allocatedBudget += change;
        return true;
    } else {
        return false;
    }
}

bool ROLE_President::changeBudgetResearch(int change)
{
    if (budget->research + change >= 0 && allocatedBudget + change >= 0
            && allocatedBudget + change <= totalBudget) {
        budget->research += change;
        allocatedBudget += change;
        return true;
    } else {
        return false;
    }
}

void ROLE_President::updateInformation(int newTotalBudget, int newPopulation, int newMorale)
{
    totalBudget = newTotalBudget;
    population = newPopulation;
    morale = newMorale;
}

bool ROLE_President::getWillSurrender()
{
    return willSurrender;
}

void ROLE_President::setWillSurrender(bool surrender)
{
    willSurrender = surrender;
}
