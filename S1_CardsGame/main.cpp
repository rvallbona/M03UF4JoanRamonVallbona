#include <iostream>
#include "Card.h"
#include "Player.h"
#include "Game.h"
int main() {
	std::cout << "====== CardsGame ======" << std::endl;
	Game g;
	for (int i = 0; i < g.players.size(); i++)
	{
		g.players[i].PrintHand();
	}

}