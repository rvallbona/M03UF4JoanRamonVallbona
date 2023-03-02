#include "Card.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() 
{
	Card card(COINS, 10);
	Card card1(COINS, 10);
	srand(time(NULL));
	bool result = card == card1;
	std::cout << result << std::endl;
}