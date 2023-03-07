#include "Player.h"

Player::Player(std::string name)
{
	id = name;
}

void Player::InsertCard(Card c)
{
	//We sort from smallest to greatest.
	//  1 of SPADES is the smalles card.
	//12 of CLUBS it the greastest card.
	std::vector<Card>::iterator it = hand.begin();

	for (it; it != hand.end(); it++)
	{
		if ((*it) > c)
		{
			hand.emplace(it, c);
			break;
		}
	}
	if (it == hand.end())
	{
		hand.push_back(c);
	}
}

Card Player::GetCard()
{
	// Setp 1 - Select a random card from the hand.
	int cardPosition = rand() % hand.size();

	// Step 2 - Remove that card from the hand and store it temporarily
	Card temp = hand[cardPosition];
	hand.erase(hand.begin() + cardPosition);

	// Step 3 - Return the stored card.
	return temp;
}	

Card Player::GetCard(Suit t)
{
	// 
	return Card();
}

void Player::PrintHand()
{
}