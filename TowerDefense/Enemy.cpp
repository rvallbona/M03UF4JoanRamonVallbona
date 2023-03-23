#include "Enemy.h"

void Enemy::Update()
{
	position.x += velocity;
}

void Enemy::ReceiveDamage(int amount)
{
	hp -= amount;
}