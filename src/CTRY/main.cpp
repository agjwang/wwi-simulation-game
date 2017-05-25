#include "CTRY_France.h"
#include <iostream>

using namespace std;

int main(){
    CTRY_France *instance = CTRY_France::getInstance();
    int gold = instance->getGold();
    cout << gold << endl;
    return 0;
}
