#include <string>
#include <iostream>
#include <cstdlib>

enum EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH };

std::string getEnemyTypeString(EnemyType type)
{
    switch (type) {
    case ZOMBIE:
        return "ZOMBIE";
    case VAMPIRE:
        return "VAMPIRE";
    case GHOST:
        return "GHOST";
    case WITCH:
        return "WITCH";
    default:
        return "";
    }
}

struct Enemy
{
    EnemyType type;
    std::string name;
    int health;
};

bool equalEnemies(Enemy name1, Enemy name2)
{
    return name1.name == name2.name && name1.type == name2.type;
}

Enemy createRandomEnemy()
{
    const char* names[] = { "Dracula", "Casper", "Frankenstein", "Bellatrix" };
    EnemyType type = EnemyType(rand() % 4);
    std::string name = names[(rand() % 4)];
    int health = rand() % 101;
    return { type, name, health };
}