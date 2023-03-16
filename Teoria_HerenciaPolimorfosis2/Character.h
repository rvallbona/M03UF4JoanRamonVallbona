#pragma once
class Character {
protected:
	int health;
	int damage;

public:
	Character(int h, int d);

	virtual void ReceiveDamage(int amount);
	void DealDamage(Character& other);
};