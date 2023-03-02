#pragma once
#include "Card.h"
#include <string>
#include <stdlib.h>
#include<vector>
class Player 
{
private:
	int id;
	std::vector<Card> hand;
public:
	//Constructor
	Player();
	//get()
	int GetId() { return id; }
	std::vector<Card> GetHand() { return hand; }
	//func()
	void InsertCard(Card c);
	Card GetCard();
	Card GetCard(Suit s);
	void PrintHand();
};