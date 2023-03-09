#include "Game.h"
#include "Card.h"
Game::Game()
{
	//Inicialitza de 2 a 4 players amb noms random.
	//value = max + rand() % (max - min +1)
	int playerAmout = 2 + rand() % (4 - 2 + 1);
	std::string names[] = { "ramon", "victor",  "miquel", "antonio", "mercedes" };

	// ------ INITIALIZE DECK
	std::vector<Card> generatedCards;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 12; j++){
			generatedCards.push_back(Card(j + 1, (Suit)i));
		}
	}

	// ------ SHUFFLE
	auto rng = std::default_random_engine{};
	std::shuffle(generatedCards.begin(), generatedCards.end(), rng);
	//Put the cards into the deck
	for (int i = 0; i < 48; i++)
	{
		deck.push(generatedCards[i]);
	}

	// ------ INITIALIZE PLAYERS
	for (int i = 0; i < playerAmout; i++)
	{
		players.push_back(Player(names[rand() % 5]));
	}

	// ------ REPARTIR CARTAS
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < playerAmout; j++){
			players[j].InsertCard(deck.top());
			deck.pop();
		}
	}
}

Card Game::GetNewCard()
{
	return Card();
}

void Game::DiscardCard(Card c)
{

}

void Game::PrintDiscarded()
{

}
