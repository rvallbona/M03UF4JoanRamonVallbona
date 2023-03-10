#include "Enemy.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    Enemy enemy;
    std::cout << enemy.GetName() << " - " << enemy.GetType() << " - " << enemy.GetHealth() << std::endl;
    
    Enemy enemy1(300);
    std::cout << enemy1.GetName() << " - " << enemy1.GetType() << " - " << enemy1.GetHealth() << std::endl;

    Enemy enemy2(RICHARD, "richard");
    std::cout << enemy2.GetName() << " - " << enemy2.GetType() << " - " << enemy2.GetHealth() << std::endl;

    bool result = enemy == enemy1;
    std::cout << result << std::endl;
}