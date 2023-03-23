#pragma once

#include "Vector2.h"

class Enemy {
protected:
	Vector2 position;
	int hp;
	float velocity;

public:
	Enemy(Vector2 p, int hp, float v)
		: position(p), hp(hp), velocity(v) {}

	Vector2 GetPosition() { return position; }
	
	void virtual ReceiveDamage(int amount);
	
	void Update();
};