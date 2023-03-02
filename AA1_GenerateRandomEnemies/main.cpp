#include <iostream>
#include "Enemy.h"
const int MAX_ENEMIES = 5;

int main()
{
    Enemy enemies[MAX_ENEMIES];
    int numEnemies = 0;

    while (numEnemies < MAX_ENEMIES) {
        Enemy newEnemy = createRandomEnemy();
        bool enemyExists = false;

        for (int i = 0; i < numEnemies; i++) {
            if (equalEnemies(newEnemy, enemies[i])) {
                enemyExists = true;
                break;
            }
        }

        if (!enemyExists) {
            enemies[numEnemies] = newEnemy;
            numEnemies++;
        }
    }

    for (const auto& enemy : enemies) {
        std::cout << "Enemy: " << enemy.name << " (" << getEnemyTypeString(enemy.type) <<  ")" << " with " << enemy.health << " life " << std::endl;
    }

    return 0;
}