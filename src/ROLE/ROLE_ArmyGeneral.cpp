/*
 * NAME: ROLE_ArmyGeneral.cpp
 *
 * COMMENT: Implementation for Army General
 *
 */

#include "ROLE_ArmyGeneral.h"

ROLE_ArmyGeneral::ROLE_ArmyGeneral()
{
    nation = 0;
    totalArmySize = 0;
    resources = 0;
    morale = 0;
    armies = 0;
}

ROLE_ArmyGeneral::ROLE_ArmyGeneral(Country country, int armySize, int resources, int morale)
{
    nation = country;
    totalArmySize = army;
    this->resources = resources;
    this->morale = morale;

    ArmyDivision *division = new ArmyDivision;
    division->divisonName = "First Army";
    division->armyDivisonSize = totalArmySize;
    division->action = IDLE;

    armies = {division};
}

ROLE_ArmyGeneral::~ROLE_ArmyGeneral()
{
    for (ArmyDivision *division : armies) {
        delete divison;
    }

    delete armies;
}

void ROLE_ArmyGeneral::setArmySize(int newArmySize)
{
    totalArmySize = newArmySize;
}

void ROLE_ArmyGeneral::setResources(int newResources)
{
    resources = newResources;
}

void ROLE_ArmyGeneral::setMorale(int newMorale)
{
    morale = newMorale;
}

vector<*ArmyDivision> ROLE_ArmyGeneral::getArmyDivision()
{
    return armies;
}

int ROLE_ArmyGeneral::getArmySize()
{
    return totalArmySize;
}

int ROLE_ArmyGeneral::getResources()
{
    return resources;
}

int ROLE_ArmyGeneral::getMorale()
{
    return morale;
}

Country ROLE_ArmyGeneral::getCountry()
{
    return nation;
}

void ROLE_ArmyGeneral::createArmyDivision(string name)
{
    ArmyDivision *newDivison = new ArmyDivison;
    newDivision->divisionName = name;
    newDivision->armyDivisonSize = 0;
    newDivision->action = IDLE;

    armies.push_back(newDivision);
}

bool ROLE_ArmyGeneral::transferSoldiers(string fromDivision, string toDivision, int numSoldiers)
{
    ArmyDivision *formerDivision = 0;
    ArmyDivision *nextDivison = 0;

    for (ArmyDivision *division : armies) {
        if (strcmp(division->divisionName, fromDivision) == 0) {
                formerDivision = division;
        } else if (strcmp(division->divisionName, toDivision) == 0) {
                nextDivision = division;
        }

        if (formerDivision && nextDivision) {
                break;
        }
    }

    if (!formerDivision || !nextDivision) {
        return false;
    }

    if (formerDivision->armyDivisionSize >= numSoldiers) {
        formerDivision->armyDivisionSize -= numSoldiers;
        nextDivision->armyDivisionSize += numSoldiers;
        return true;
    } else {
        return false;
    }
}

void ROLE_ArmyGeneral::resetArmyDivisions()
{
    for (ArmyDivision *division : armies) {
        delete division;
    }
    delete armies;

    ArmyDivision *firstDivision = new ArmyDivision;
    firstDivision->divisionName = "First Army";
    firstDivision->armyDivisionSize = totalArmySize;
    firstDivision->action = IDLE;

    armies = {firstDivision};
}

void ROLE_ArmyGeneral::setActionForArmyDivision(string armyDivisionName, ArmyAction action)
{
    ArmyDivision *currentDivision = 0;

    for (ArmyDivision *division : armies) {
        if (strcmp(division->divisionName, armyDivisionName) == 0) {
                currentDivision = division;
                break;
        }
    }

    if (currentDivision) {
        cureentDivision->action = action;
    }
}

void ROLE_ArmyGeneral::updateInformation(int newTotalArmySize, int newResources, int newMorale, 
                                                vector<*ArmyDivision> updatedDivisions)
{
    totalArmySize = newTotalArmySize;
    resources = newResources;
    newMorale = newMorale;
    
    if (updatedDivisions) {
        armies = updatedDivisions;
    }
}
