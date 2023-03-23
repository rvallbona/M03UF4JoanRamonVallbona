#pragma once

#include "Vector2.h"
#include "Enemy.h"

#include <vector>

class Turret {
protected:
	Vector2 position;
	int damage;
	float range;
	std::vector<Enemy*> enemies;

public:
	Turret(Vector2 p, int d, float r)
		: position(p), damage(d), range(r) {}

	void UpdateEnemiesInRange(std::vector<Enemy*> allEnemies);

	void Update();
};