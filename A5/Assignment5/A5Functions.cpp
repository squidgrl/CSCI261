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

	placeHolder = deck.at(i);

	deck.at(i) = deck.at(j);
	deck.at(j) = placeHolder;

	return;
}

Card dealNextCard(vector<Card>& deck) {

	Card cardToDeal = deck.at((deck.size() - 1));

	deck.pop_back();

	return cardToDeal;

}

void addPoints(Card currentCard, int& total) {

	if(currentCard.rank == 11 || currentCard.rank == 12 || currentCard.rank == 13) {

		total += 10;
	}

	else if (currentCard.rank == 1){
		
		total += 11;

	}

	else {

		total += currentCard.rank;

	}

	return;
}

void changePoints(int& total) {

	total -= 10;

	return;

}

void checkInstantBlackJack(vector<Card> currentHand, int& total) {

	if(currentHand.at(0).rank == 1) {

		if(currentHand.at(1).rank == 10 || currentHand.at(1).rank == 11 || currentHand.at(1).rank == 12 || currentHand.at(1).rank == 13) {

			total = 21;

		}

	}

	if(currentHand.at(1).rank == 1) {

		if(currentHand.at(0).rank == 10 || currentHand.at(0).rank == 11 || currentHand.at(0).rank == 12 || currentHand.at(0).rank == 13) {

			total = 21;

		}

	}

	return;

}
