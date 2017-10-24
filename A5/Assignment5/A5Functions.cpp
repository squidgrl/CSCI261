/* CSCI 261
 * Assignment5 Functions
 * Author: Krista Dunlap
*/

#include <iostream>
#include <cstdlib>
#include "CardStruct.h"
using namespace std;

//Function to print card
void printCard(Card card) {

	switch(card.rank) {

		case 1:
			cout << "Ace of " << card.suit;
			break;
		case 11:
			cout << "Jack of " << card.suit;
			break;
		case 12:
			cout << "Queen of " << card.suit;
			break;
		case 13:
			cout << "King of " << card.suit;
			break;
		default:
			cout << card.rank << " of " << card.suit;

	}

	return;

}

//Function to shuffle deck
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

//Function to deal card from top(end) of deck
Card dealNextCard(vector<Card>& deck) {

	Card cardToDeal = deck.at((deck.size() - 1));

	deck.pop_back();

	return cardToDeal;

}

//Adds points to total based on card dealt
void addPoints(Card currentCard, int& total) {

	switch(currentCard.rank) {

		case 1:
			total += 11;
			break;
		case 11:
		case 12:
		case 13:
			total += 10;
			break;
		default:
			total += currentCard.rank;

	}

}

//Function to change points of Ace from 11 to 1
void changeAcePoints(int& total) {

	total -= 10;

	return;

}

//Function to check for an instant blackjack
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
