/*
 * NAME: LOGIC_ArmyGeneralLogic.cpp
 *
 * COMMENTS:
 *
 */

LOGIC_ArmyGeneralLogic::LOGIC_ArmyGeneralLogic(REND_InputManager input)
   : LOGIC_BaseLogic(input)
{
} 

LOGIC_ArmyGeneralLogic::~LOGIC_ArmyGeneralLogic()
{
}

void LOGIC_ArmyGeneralLogic::init()
{
    LOGIC_BaseLogic::init();
}

void LOGIC_ArmyGeneralLogic::update()
{
    LOGIC_BaseLogic::update();
    applyLogic();
}

void LOGIC_ArmyGeneralLogic::cleanup()
{
    LOGIC_BaseLogic::cleanup();
}

void LOGIC_ArmyGeneralLogic::applyLogic()
{
    // TODO: Determine what possible keys and what positions are valid inputs 
}
