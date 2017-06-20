/*
 * NAME: ENT_BaseHUD.h
 *
 * COMMENTS: Base class for all HUDs in the game
 */

#ifndef __ENT_BaseHUD_h__
#define __ENT_BaseHUD_h__

#include "../SYSUTIL/SYSUTIL_SystemIncludes.h"

class ENT_BaseHUD : public ENT_BaseEntity
{

    public:

        // Class constructor and destructor
                                 ENT_BaseHUD(string name, int width, int height,
                                         bool transparency, bool visibility,
                                         bool pickability)
                                     : ENT_BaseEntity(name, width, height), 
                                       isTransparent(isTransparent)
                                       isVisible(isVisible), 
                                       isPickable(isPickable)
        virtual                 ~ENT_BaseHUD();

        bool                     getIsTransparent()
                                { return isTransparent; }
        void                     setIsTransparent(bool transparency)
                                { isTransparent = transparency; }

        bool                     getIsVisible()
                                { return isVisible; }
        void                     setIsVisible(bool visibility)
                                { isVisible = visibility; }

        bool                     getIsPickable()
                                { return isPickable; }
        void                     setIsPickable(bool pickability)
                                { isPickable = pickability; }
    protected:

    private:
        // Basic attributes common to all HUDs
        bool                     isTransparent;
        bool                     isVisible;
        bool                     isPickable; 
         
};

#endif
