/* CSCI 261 Lab 3A: RPS: Multigame
 *
 * Author: Krista Dunlap
 *
 * Letting user play multiple rounds of RPS & keeps track of wins/losses/ties
 */

//Inlcluding libraries needed
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	
	//Seeding rand() & declaring/intializing userChoice keepPlaying gamesWon gamesLost & gamesTied
	srand( time(0) );
	char userChoice;
	char keepPlaying = 'Y';
	int gamesWon = 0;
	int gamesLost = 0;
	int gamesTied = 0;
	
	//Using while loop to allow player to play more than one round
	while (keepPlaying == 'Y' || keepPlaying == 'y') {

		//Welcoming Player & Asking for/Inputting players choice
		cout << "Welcome to a riveting round of Rock, Paper, Scissors!" << endl;
		cout << "Please enter R, P or S." << endl << endl;
		cout << "Player Choice: ";
		cin >> userChoice;
		
		//Outputting userChoice
		if (userChoice == 'R' || userChoice == 'r') {
			cout << endl << "Player has chosen Rock." << endl;
		}
		else if (userChoice == 'P' || userChoice == 'p') {
			cout << endl << "Player has chosen Paper." << endl;
		}

		else if (userChoice == 'S'|| userChoice == 's') {
			cout << endl << "Player has chosen Scissors." << endl;
		}
		else {
			cout << endl << "Could not understand choice. Please try again." << endl;
			continue;
		}
		
		//Declaring computerChoiceInt & computerChoiceChar
		int computerChoiceInt;
		char computerChoiceChar;
		
		//Getting random number (from 0 to 2) for computerChoiceInt
		computerChoiceInt = rand() % 3;
		
		//Translating computer choice int to char
		if (computerChoiceInt == 0) {
			computerChoiceChar = 'R';
		}
		else if (computerChoiceInt == 1) {
			computerChoiceChar = 'P';
		}
		else {
			computerChoiceChar = 'S';
		}
		
		//Outputting computer choice using computerChoiceChar
		if (computerChoiceChar == 'R') {
			cout << "Computer has chosen Rock." << endl << endl;
		}
		else if (computerChoiceChar == 'P') {
			cout << "Computer has chosen Paper." << endl << endl;
		}
		else {
			cout << "Computer has chosen Scissors." << endl << endl;
		}
		
		//Using if/else statements to print the winner & Add to gamesWon, gamesLost & gamesTied
		//Incrementing gamesWon/gamesLost/gamesTied based on outcome
		if (userChoice == 'R' || userChoice == 'r') {
			if (computerChoiceChar == 'R') {
				cout << "Rock and Rock is a tie!" << endl;
				++gamesTied;
			}
			else if (computerChoiceChar == 'P') {
				cout << "Paper beats Rock! Computer Wins!" << endl;
				++gamesLost;
			}
			else if (computerChoiceChar == 'S') {
				cout << "Rock beats Scissors! Player Wins!" << endl;
				++gamesWon;
			}
		}
		else if (userChoice == 'P' || userChoice == 'p') {
			if (computerChoiceChar == 'R') {
				cout << "Paper beats Rock! Player Wins!" << endl;
				++gamesWon;
			}
			else if (computerChoiceChar == 'P') {
				cout << "Paper and Paper is a tie!" << endl;
				++gamesTied;
			}
			else if (computerChoiceChar == 'S') {
				cout << "Scissors beats Paper! Computer Wins!" << endl;
				++gamesLost;
			}
		}
		else {
			if (computerChoiceChar == 'R') {
				cout << "Rock beats Scissors! Computer Wins!" << endl;
				++gamesLost;
			}
			else if (computerChoiceChar == 'P') {
				cout << "Scissors beats Paper! Player Wins!" << endl;
				++gamesWon;
			}
			else if (computerChoiceChar == 'S') {
				cout << "Scissors and Scissors is a tie!" << endl;
				++gamesTied;
			}
		}

		//Asking user if they would like to keep playing & stores answer into keepPlaying
		cout << "Would you like to play again? (Y/N)" << endl;
		cin >> keepPlaying;
	}

	cout << endl << "You won " << gamesWon << " game(s), lost " << gamesLost << " game(s), and tied " << gamesTied << " game(s)." << endl;
	cout << "Thanks for playing!" << endl;

	return 0;
  }
