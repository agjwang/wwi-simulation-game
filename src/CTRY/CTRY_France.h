/*
 * NAME: CTRY_France.h
 *
 * COMMENTS: Country entity (singleton) data model for France
 */

#ifndef __CTRY_France_h__
#define __CTRY_France_h__

#include "CTRY_Base.h"

class CTRY_France:public CTRY_Base
{
        public:
            //Accessor method for static instance of class
            static CTRY_France*         getInstance();
 
            //Public deconstructor
                                       ~CTRY_France();

        private:
            //Private constructor
                                        CTRY_France();
            
            static CTRY_France*         instance;
            static bool                 instanceFlag;
            
};

#endif
