#pragma once
#include "Character.h"

class Player : public Character {
protected:
	int defense;
public:
	Player(int hp, int dmg, int def);

	void ReceiveDamage(int amount) override;
};