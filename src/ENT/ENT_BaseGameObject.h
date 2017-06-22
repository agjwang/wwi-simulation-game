/*
 * NAME: ENT_BaseGameObject.h
 *
 * COMMENTS: Base class for all game objects in the game
 */

#ifndef __ENT_BaseGameObject_h__
#define __ENT_BaseGameObject_h__

#include "../SYSUTIL/SYSUTIL_SystemIncludes.h"

class ENT_BaseGameObject : public ENT_BaseEntity
{

    public:

        // Class constructor and destructor
                                 ENT_BaseGameObject(string name, int width,
                                         int height, string texture)
                                     : ENT_BaseEntity(name, width, height),
                                       textureName(texture)
        virtual                 ~ENT_BaseGameObject();

        string                   getTextureName()
                                { return textxureName; }
        string                   setTextureName(string texture)
                                { textureName = texture; }
    protected:

    private:
        // Basic attributes common to all game objects
        string                   textureName; 
};

#endif
