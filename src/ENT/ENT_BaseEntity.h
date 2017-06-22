/*
 * NAME: ENT_BaseEntity.h
 *
 * COMMENTS: Base class for all game entities in the game
 */

#ifndef __ENT_BaseEntity_h__
#define __ENT_BaseEntity_h__

#include "../SYSUTIL/SYSUTIL_SystemIncludes.h"

class ENT_BaseEntity
{

    public:

        // Class constructor and destructor
                                 ENT_BaseEntity(string name, int width, int height)
                                     : entityName(name), 
                                       entityWidth(width),
                                       entityHeight(height)

        virtual                 ~ENT_BaseEntity();

        string                   getEntityName()
                                { return entityName; }

        void                     getEntitySize(int &width, int &height)
                                { 
                                    width = entityWidth;
                                    height = entityHeight;
                                }

        void                     setEntityName(string name)
                                { entityName = name; }

        void                     setEntitySize(int width, int height)
                                {
                                    entityWidth = width;
                                    entityHeight = height;
                                }
    protected:

    private:
        // Basic attributes common to all entities
        string                   entityName;
        int                      entityWidth;
        int                      entityHeight;
        
};

#endif
