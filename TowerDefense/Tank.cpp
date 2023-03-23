#include "Tank.h"

void Tank::ReceiveDamage(int amount)
{
	if (amount > shield)
		hp -= (amount - shield);
}
