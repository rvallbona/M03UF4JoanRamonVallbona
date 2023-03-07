#pragma once
#include "Card.h"
#include "Player.h"
#include <string>
#include <stdlib.h>
#include<array>
class Game {
private:
	int players[4];
	std::vector<Card> deck;
	std::vector<Card> discarded;
public:
	//Constructor
	Game(
	/*inicializa a los players con nombres aleatorios
	o inicializa al mazo con todas las cartas de la baraja de manera aleatoria
	o reparte 7 cartas (cogidas del mazo)  a cada uno de los jugadores. El
	reparto debe hacerse de una en una*/
	);
	//get()
	int GetPlayers() { return sizeof(players); }
	std::vector<Card> GetDeck() { return deck; }
	std::vector<Card> GetDiscarded() { return discarded; }
	//func()
	Card GetNewCard();
	void DiscardeCard(Card c);
	void PrintDiscarded();
};