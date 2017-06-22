/*
 * NAME: LOGIC_PresidentLogic.cpp
 *
 * COMMENTS:
 *
 */

LOGIC_PresidentLogic::LOGIC_PresidentLogic(REND_InputManager input)
   : LOGIC_BaseLogic(input)
{
} 

LOGIC_PresidentLogic::~LOGIC_PresidentLogic()
{
}

void LOGIC_PresidentLogic::init()
{
    LOGIC_BaseLogic::init();
}

void LOGIC_PresidentLogic::update()
{
    LOGIC_BaseLogic::update();
    applyLogic();
}

void LOGIC_PresidentLogic::cleanup()
{
    LOGIC_BaseLogic::cleanup();
}

void LOGIC_PresidentLogic::applyLogic()
{
    // TODO: Determine what possible keys and what positions are valid inputs 
}
