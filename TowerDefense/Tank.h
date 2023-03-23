#pragma once

#include "Enemy.h"

class Tank : public Enemy {
private:
	int shield;

public:
	Tank(Vector2 p, int hp, float v, int s)
		: Enemy(p, hp, v), shield(s) {}

	void ReceiveDamage(int amount) override;
};