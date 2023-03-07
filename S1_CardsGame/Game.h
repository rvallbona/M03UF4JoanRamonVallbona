#pragma once
#include "Player.h"
#include <stack>
class Game {
public:
	std::vector<Player> players;
	std::stack<Card> deck;
	std::stack<Card> discardedCard;

	Game();
	Card GetNewCard();
	void DiscardCard(Card c);
	void PrintDiscarded();
};