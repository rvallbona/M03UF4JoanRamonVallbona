#include "Enemy.h"
//Constructor default:
Enemy::Enemy() {
	type = (EnemyType)(rand() % 5);
	name = "Default Name";
	//value = min + rand() % (max - min + 1);
	health = 100 + rand() % (500 - 100 + 1);
}
//Constructor amb 1 parametre
Enemy::Enemy(int health) {
	type = (EnemyType)(rand() % 5);
	name = "Default Name";
	this->health = health;
}
//Constructor amb tots els parametres
Enemy::Enemy(EnemyType type, std::string name, int health)
	:type(type), name(name), health(health)
{

}
bool Enemy::ReciveDamage(int amount) {
	health -= amount;
	return health <= 0;
}
bool Enemy::operator == (const Enemy& other) {
	bool result = true;

	result &= type == other.type;
	result &= name == other.name;
	result &= health == other.health;

	return result;
}