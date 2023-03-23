#include "Turret.h"

void Turret::UpdateEnemiesInRange(std::vector<Enemy*> allEnemies)
{
	enemies.clear();
	
	for (int i = 0; i < allEnemies.size(); i++) {
		
		float distance = position.CalculateHammingDistance(allEnemies[i]->GetPosition());
		
		if (distance <= range)
			enemies.push_back(allEnemies[i]);
	}
}

void Turret::Update()
{
	if (!enemies.empty())
		enemies[0]->ReceiveDamage(damage);
}