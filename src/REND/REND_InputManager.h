/*
 * NAME: REND_InputManager.h
 *
 * COMMENTS: Sets up callbacks to get user input
 */

#ifndef __REND_InputManager_h__
#define __REND_InputManager_h__

#include "../SYSUTIL/SYSUTIL_SystemIncludes.h"

#include "REND_Window.h"

class REND_InputManager
{

    public:

        enum MouseButton
        {
            MOUSE_NO_BUTTON,
            MOUSE_LEFT_BUTTON,
            MOUSE_MIDDLE_BUTTON,
            MOUSE_RIGHT_BUTTON,
            NUM_MOUSE_BUTTONS   // Cannot set as this, used only for num of buttons
        };

        enum KeyAction
        {
            KEY_NO_ACTION = 0,
            KEY_PRESS,
            KEY_HELD,
            KEY_RELEASE,
            NUM_KEY_ACTIONS   // Cannot set as this, used only for num of actions
        };

        // Class constructor and destructor
                                 REND_InputManager(Window window);
        virtual                 ~REND_InputManager();

        // Methods to set up and update input manager
        // Set up and maintain callback functions
        void                     init();
        
        void                     update();

        void                     cleanup();


        void                     getMouseCoords(double &xpos, double &ypos);

        MouseButton              getMouseButton();
                                { return mouseButton; }
        KeyAction                getMouseAction()
                                { return mouseAction; }

        int                      getKeyboardButton()
                                { return keyboardButton; }
        KeyAction                getKeyboardAction()
                                { return keyboardAction; }
    protected:


    private:

        void                     keyCallback(GLFWwindow* window, int key,
                                    int scancode, int action, int mods);
        void                     cursorPosCallback(GLFWwindow* window,
                                    double xpos, double ypos);
        void                     mouseButtonCallback(GLFWwindow* window, 
                                    int button, int action, int mods);
        
        GLFWwindow              *windowHandle;
        
        MouseButton              mouseButton;
        KeyAction                mouseAction;

        double                   mouseXPos;
        double                   mouseYPos;
        
        int                      keyboardButton;
        KeyAction                keyboardAction;
};

#endif
