#include "Enemy.h"

bool Enemy::ReciveDamage(int amount) {
	health -= amount;
	return health <= 0;
}