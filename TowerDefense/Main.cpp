#include <iostream>
#include <random>

#include "Enemy.h"
#include "Turret.h"
#include "Tank.h"

int main() {

	std::vector<Enemy*> enemies;
	enemies.push_back(new Tank(Vector2(0,1), 10, 1, 3));

	Turret t(Vector2(2, 0), 5, 1);

	if (Tank* t = dynamic_cast<Tank*>(enemies[0]))
	{

	}

	while (true) {
		for (int i = 0; i < enemies.size(); i++)
			enemies[i]->Update();

		t.UpdateEnemiesInRange(enemies);
		t.Update();
	}
}