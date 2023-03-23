#include <iostream>
#include <random>

#include "Enemy.h"
#include "Turret.h"

int main() {

	std::vector<Enemy*> enemies;
	enemies.push_back(new Enemy(Vector2(0,1), 10, 1));

	Turret t(Vector2(2, 0), 5, 1);

	while (true) {
		for (int i = 0; i < enemies.size(); i++)
			enemies[i]->Update();

		t.UpdateEnemiesInRange(enemies);
		t.Update();
	}
}