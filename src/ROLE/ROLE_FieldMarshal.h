/*
 * NAME: ROLE_FieldMarshal.h
 *
 * COMMENT: Role file for Field Marshal
 *
 */

#ifndef __ROLE_FieldMarshal_h__
#define __ROLE_FieldMarshal_h__

#include "./CTRY/CTRY_Countries.h"

class ROLE_FieldMarshal
{
    public:
                                ROLE_FieldMarshal();
                                ROLE_FieldMarshal(Country country, int armySize, int resources,
                                                   int morale);
                               ~ROLE_FieldMarshal();

    private:
       Country nation;
       int army;
       int resources;
       int morale;
}

#endif
