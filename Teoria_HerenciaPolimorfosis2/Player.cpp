#include "Player.h"

Player::Player(int hp, int dmg, int def)
	: Character(hp, dmg), defense(def)
{
}

void Player::ReceiveDamage(int amount)
{
	if (amount > defense)
		health -= (amount - defense);
}