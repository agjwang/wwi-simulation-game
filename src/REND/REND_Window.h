/*
 *  NAME: REND_Window.h
 *
 *  COMMENTS: Creates and updates window to render to screen
 */

#ifndef __REND_Window_h__
#define __REND_Window_h__

#include <iosfwd>

class Window
{

    public:

        // Class constructor and destructor
                                 Window(string title, int width, int height,
                                         bool vSync);

        virtual                 ~Window();

        // Methods to set up and update window
        void                     init();

        void                     update();

        bool                     isWindowCloseRequested(); 

    protected:

    private:

        string                  title;
        int                     width;
        int                     height;
        bool                    vSync;

}

#endif
