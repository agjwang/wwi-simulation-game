/*
 * NAME: LOGIC_BaseLogic.cpp
 *
 * COMMENTS:
 *
 */

LOGIC_BaseLogic::LOGIC_BaseLogic(REND_InputManager input) : input(input)
{
}

LOGIC_BaseLogic::~LOGIC_BaseLogic()
{
}

void LOGIC_BaseLogic::init()
{
    input.init();
}

void LOGIC_BaseLogic::update()
{
    input.getMouseCoords(mouseXPos, mouseYPos);
    mouseButton = input.getMouseButton();
    mouseAction = input.getMouseAction();
    keyboardButton = input.getKeyboardButton();
    keyboardAction = input.getKeyboardAction(); 
}

void LOGIC_BaseLogic::cleanup()
{
}
