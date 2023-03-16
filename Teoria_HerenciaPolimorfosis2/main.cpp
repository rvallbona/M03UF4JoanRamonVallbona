#include "Character.h"
#include "Enemy.h"
#include "Player.h"

#include <iostream>

int main() {
	std::cout << "HelloWorld" << std::endl;
	Player p1(100, 10, 5);
	Enemy e(100, 10);
	Character* p2 = new Player(100, 10, 2);

	e.DealDamage(p1);
	e.DealDamage(*p2);

	return 0;
}