#include "REND_DisplayManager.h"

int main(void)
{
    DisplayManager *dm = new DisplayManager("wwi", 800, 600, true);
    dm->init(); 
}
