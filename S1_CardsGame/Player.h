#pragma once
#include "Card.h"

#include <string>
#include <vector>
class Player {
private:
	std::string id;
	std::vector<Card> hand;
public:
	Player(std::string name);
	void InsertCard(Card c);
	Card GetCard();
	Card GetCard(Suit t);
	void PrintHand();
};