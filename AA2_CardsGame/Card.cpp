#include "Card.h"
//Constructor
Card::Card(Suit suit, int value) 
	:suit(suit), value(value)
{

}
//Func
bool Card::operator == (const Card& other) {
	bool result = true;

	result &= suit == other.suit;
	result &= value == other.value;

	return result;
}