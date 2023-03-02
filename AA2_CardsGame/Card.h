#pragma once
#include <string>
#include <stdlib.h>
#include <string>
#include <stdlib.h>

enum Suit {SPADES, COINS, CUPS, CLUBS };

class Card
{
private:
	Suit suit;
	int value;
public:
	//Constructor
	Card(Suit suit, int value);
	//get()
	Suit GetSuit() { return suit; }
	int GetValue() { return value; }
	//func()
	bool operator==(const Card& other);
};