#pragma once
#include <string>

enum EnemyType { GOBLIN, RICHARD, RADEV, DIMAS, EDU };

class Enemy {
private:
	EnemyType type;
	std::string name;
public:
	int health;

	EnemyType GetType() { return type; }
	std::string GetName() { return name; }

	bool ReciveDamage(int amount);
};