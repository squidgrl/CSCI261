/* CSCI 261 Assignment 5: Blackjack
 *
 * Author: Krista Dunlap
 *
 * A game of blackjack
 */

//Inlcluding libraries needed
#include <iostream>
#include <vector>
#include <string>
#include "A5Functions.h"
#include "CardStruct.h"
using namespace std;

int main() {

	//Seeding rand
	srand(time(0));

	//Declaring/initialzing deck of cards, dealer/player cards, dealer/player total, hitOrStand & continueToPlay
	vector<Card> deck;
	vector<Card> currentPlayerHand;
	vector<Card> currentDealerHand;
	Card currentDealerCard;
	Card currentPlayerCard;
	int dealerTotal;
	int playerTotal;
	string hitOrStand;
	string continueToPlay = "yes";

	//Loop to populate deck vector
	for(int i = 1; i < 14; ++i) {

		deck.push_back({i,"Clubs"});

		deck.push_back({i,"Spades"});

		deck.push_back({i,"Hearts"});

		deck.push_back({i,"Diamonds"});

	}


	//First print statement (to test deck population)
	/*for(int i = 0; i < deck.size(); ++i) {

		cout << "Card Number " << (i+1) << ": ";

		printCard(deck.at(i));

	}*/

	//Loop to shuffle deck
	for(int i = 0; i < 85; ++i) {

		shuffleDeck(deck);
	
	}

	//Second print statement (to test shuffleDeck function)
	/*for(int i = 0; i < deck.size(); ++i) {

		cout << "Card Number " << (i+1) << ": ";

		printCard(deck.at(i));

	}*/

	//Testing dealNextCard function
	/*for(int i = 0; i < 52; ++i) {

		cout << deck.size() << endl;

		printCard(dealNextCard(deck));

		cout << endl;

	}*/

	//Loop to allow player to keep playing
	while(continueToPlay == "Yes" || continueToPlay == "yes") {

		//Resetting dealer/player totals & hands before each game
		dealerTotal = 0;
		playerTotal = 0;
		currentPlayerHand.clear();
		currentDealerHand.clear();

		//Repopulating/reshuffling deck if it gets too low (<20)
		if(deck.size() < 20) {
			
			deck.clear();

			for(int i = 1; i < 14; ++i) {

				deck.push_back({i,"Clubs"});

				deck.push_back({i,"Spades"});

				deck.push_back({i,"Hearts"});

				deck.push_back({i,"Diamonds"});

			}

			for(int i = 0; i < 85; ++i){

				shuffleDeck(deck);

			}

		}

		//Dealing card to dealer & adding points to total
		currentDealerCard = dealNextCard(deck);
		cout << "The Dealer shows the ";
		printCard(currentDealerCard);
		cout << endl;
		addPoints(currentDealerCard, dealerTotal);
		currentDealerHand.push_back(currentDealerCard);
		cout << "The Dealer total is " << dealerTotal << endl << endl;

		//Dealing card to player & adding points to total
		currentPlayerCard = dealNextCard(deck);
		cout << "You were dealt the ";
		printCard(currentPlayerCard);
		cout << endl;
		addPoints(currentPlayerCard, playerTotal);
		currentPlayerHand.push_back(currentPlayerCard);

		//Using a while loop to keep playing while players points are below 21
		while(playerTotal < 21) {

			//Dealing card to player & adding points to total
			currentPlayerCard = dealNextCard(deck);
			cout << "You were dealt the ";
			printCard(currentPlayerCard);
			cout << endl;
			addPoints(currentPlayerCard, playerTotal);
			currentPlayerHand.push_back(currentPlayerCard);

			//While player only has two cards, checks if theres an instant blackjack (an ace and a face card)
			if(currentPlayerHand.size() == 2) {

				checkInstantBlackJack(currentPlayerHand, playerTotal);

			}

			//Checks if an ace can be counted as a 1 instead of an 11
			if(playerTotal > 21) {

				for(int i = 0; i < currentPlayerHand.size(); ++i) {

					if(currentPlayerHand.at(i).rank == 1) {

						changeAcePoints(playerTotal);
						
						currentPlayerHand.at(i).rank = 0;

						cout << "Your Ace was changed from 11 points to 1 point." << endl;

					}

					if(playerTotal < 21) {

						i = currentPlayerHand.size();

					}

				}
			}

			//Prints total
			cout << "Your total is " << playerTotal << endl << endl;

			//Breaking loop if player gets 21 (wins) & printing it
			if(playerTotal > 21) {

				cout << "Player busts! Dealer wins." << endl;

				break;

			}

			//Breaking loop if player gets 21 (wins) & printing it
			if(playerTotal == 21) {
				
				cout << "Player wins!" << endl;

				break;

			}

			//Asking player if they would like to hit or stand
			cout << "Would you like to \"Hit\" or \"Stand\"?" << endl;
			cin >> hitOrStand;
			cout << endl;

			//Using while loop to make sure they've entered hit or stand
			while(hitOrStand != "hit" && hitOrStand != "Hit" && hitOrStand != "stand" && hitOrStand != "Stand") {
				
				cout << "Please only enter \"Hit\" or \"Stand\"." << endl;
				cin >> hitOrStand;
				cout << endl;

			}

			//Continuing loop of dealing cards if player wants to hit
			if(hitOrStand == "Hit" || hitOrStand == "hit") {

				continue;

			}

			//Breaking loop of dealing cards if player wants to stand
			else {

				break;

			}

		}

		//Dealing cards to dealer while dealers total is less than 17
		while(playerTotal < 21 && dealerTotal < 17) {

			currentDealerCard = dealNextCard(deck);
			cout << "The Dealer shows the ";
			printCard(currentDealerCard);
			cout << endl;
			addPoints(currentDealerCard, dealerTotal);
			currentDealerHand.push_back(currentDealerCard);
			cout << "The Dealer total is " << dealerTotal << endl << endl;

			//While player only has two cards, checks if theres an instant blackjack (an ace and a face card)
			if(currentDealerHand.size() == 2) {

				checkInstantBlackJack(currentDealerHand, dealerTotal);

			}

		}

		//Printing that dealer busts if dealers points are greater than 21
		if(dealerTotal > 21) {

			cout << "Dealer busts! Player wins!" << endl;

		}

		//Printing that dealer wins if dealers gets blackjack & player is under 21
		else if(dealerTotal == 21 && playerTotal < 21) {

			cout << "Dealer wins!" << endl;

		}

		//Printing that player wins (if conditions met)
		else if(playerTotal > dealerTotal && playerTotal < 21 && dealerTotal < 21) {

			cout << "Player wins!" << endl;

		}

		//Printing that dealer wins (if conditions met)
		else if(dealerTotal > playerTotal && playerTotal < 21 && dealerTotal < 21) {

			cout << "Dealer wins!" << endl;

		}

		//Printing if its a tie
		else if(dealerTotal == playerTotal && playerTotal < 21 && dealerTotal < 21) {

			cout << "It's a tie!" << endl;

		}

		//Asking player if they would like to hit or stand
		cout << "Would you like to play again? (\"Yes\" or \"No\")" << endl;
		cin >> continueToPlay;
		cout << endl;

		//Using while loop to make sure they've entered hit or stand
		while(continueToPlay != "yes" && continueToPlay != "Yes" && continueToPlay != "no" && continueToPlay != "No") {
		
			cout << "Please only enter \"Yes\" or \"No\"." << endl;
			cin >> continueToPlay;
			cout << endl;

		}

	}

	//Thanking player for playing after they have finished all games
	cout << "Thanks for playing!" << endl;

	return 0;
}
