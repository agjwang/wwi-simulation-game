#include <iostream>

#include "ENG_Timer.h"

int main(void)
{
    Timer timer; 
    while (true)
    {
        timer.updateTime();
        if (timer.getIsUpdateTime())
            std::cout << "update\n";
        if (timer.getIsRenderTime())
            std::cout << "render\n";
    }
}
