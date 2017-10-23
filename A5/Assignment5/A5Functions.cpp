/* CSCI 261
 * Assignment5 Functions
 * Author: Krista Dunlap
*/

#include <iostream>
#include <cstdlib>
#include "CardStruct.h"
using namespace std;

void printCard(Card card) {

	if(card.rank == 1) {

		cout << "Ace of " << card.suit;

	}

	else if(card.rank == 11) {

		cout << "Jack of " << card.suit ;

	}

	else if(card.rank == 12) {

		cout << "Queen of " << card.suit;

	}

	else if(card.rank == 13) {

		cout << "King of " << card.suit;

	}

	else {

		cout << card.rank << " of " << card.suit;

	}

	return;
}

void shuffleDeck(vector<Card>& deck) {

	int i;
	int j;
	Card placeHolder;

	i = rand() % 52;
	j = rand() % 52;

	placeHolder = deck[i];

	deck[i] = deck[j];
	deck[j] = placeHolder;

	return;
}

Card dealNextCard(vector<Card>& deck) {

	Card cardToDeal = deck[(deck.size() - 1)];

	deck.pop_back();

	return cardToDeal;

}

void addPoints(Card currentCard, int& total) {

	if(currentCard.rank == 11 || currentCard.rank == 12 || currentCard.rank == 13) {

		total += 10;
	}

	else {

		total += currentCard.rank;

	}

	return;
}
