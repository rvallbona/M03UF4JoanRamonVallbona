#pragma once
#include <string>
#include <stdlib.h>

enum EnemyType { GOBLIN, RICHARD, RADEV, DIMAS, EDU };

class Enemy {
private:
	//variables privadas
	EnemyType type;
	std::string name;
	int health;

public:
	//constructor
	Enemy();
	Enemy(int health);
	Enemy(EnemyType type, std::string name, int healt = 100);

	//get()
	int GetHealth() { return health; }
	EnemyType GetType() { return type; }
	std::string GetName() { return name; }

	//func()
	bool ReciveDamage(int amount);

	bool operator == (const Enemy& other);
};