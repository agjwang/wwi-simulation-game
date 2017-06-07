/*
 * NAME: LOGIC_BaseLogic.coo
 *
 * COMMENTS:
 *
 */

LOGIC_BaseLogic::LOGIC_BaseLogic(REND_InputManager input) : input(&input)
{
}

LOGIC_BaseLogic::~LOGIC_BaseLogic()
{
    delete input;
}

void LOGIC_BaseLogic::init()
{
}

void LOGIC_BaseLogic::update()
{
}

void LOGIC_BaseLogic::cleanup()
{
}
