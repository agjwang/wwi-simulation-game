/*
 * NAME: ROLE_FieldMarshal.h
 *
 * COMMENT: Role file for Field Marshal
 *
 */

#ifndef __ROLE_FieldMarshal_h__
#define __ROLE_FieldMarshal_h__

#include "./CTRY/CTRY_Countries.h"
#include <string>
#include <vector>

enum ArmyAction
{
        IDLE,
        ATTACK,
        DIG_TRENCH,
        DEFEND,
        MOVE,
        RETREAT
};

struct ArmyDivision 
{
    string divisionName;
    int armyDivisionSize;
    ArmyAction action;
};

class ROLE_FieldMarshal
{
    public:
                                ROLE_FieldMarshal();
                                ROLE_FieldMarshal(Country country, int armySize, int resources,
                                                   int morale);
                               ~ROLE_FieldMarshal();
        
        //Accessor methods
        void                    setArmySize(int newArmySize);
        void                    setResources(int newResources);
        void                    setMorale(int newMorale);

        vector<*ArmyDivision>   getArmyDivision();       
        int                     getArmySize();
        int                     getResources();
        int                     getMorale();
        Country                 getCountry();

        //Army Division creation and modification
        void                    createArmyDivision(string name);
        bool                    transferSoldiers(string fromDivision, string toDivision, int numSoldiers);
        void                    resetArmyDivisions();
        void                    setActionForArmyDivison(string armyDivisionName, ArmyAction action);

        //Update information for role
        void                    updateInformation(int newTotalArmySize, int newResources, int newMorale,
                                                        vector<*ArmyDivision> updatedDivisions);

    private:
       Country nation;
       int totalArmySize;
       int resources;
       int morale;
       vector<*ArmyDivision> armies;

};

#endif
