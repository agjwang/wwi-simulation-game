/*
 * NAME: CTRY_GreatBritain.h
 *
 * COMMENTS: Country entity (singleton) data model for Great Britain
 */

#ifndef __CTRY_GreatBritain_h__
#define __CTRY_GreatBritain_h__

#include "CTRY_Base.h"

class CTRY_GreatBritain:public CTRY_Base
{
        public:
            //Accessor method for static instance of method
            static CTRY_GreatBritain*   getInstance();
            
            //Public deconstructor
                                       ~CTRY_GreatBritain();
        private:
            //Private constructor
                                        CTRY_GreatBritain();

            //static instance
            static CTRY_GreatBritain*   instance;
            static bool                 instancFlag;
};

#endif
