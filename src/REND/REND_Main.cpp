#include "REND_DisplayManager.h"

int main(void)
{
    REND_DisplayManager *dm = new REND_DisplayManager("wwi", 800, 600, true);
    dm->init(); 
    while (!dm->isCloseRequested())
    {
        dm->update();
    }
    dm->cleanup();
}
