/* CSCI 261 Lab 6A: RPS: Game Logger
 *
 * Author: Krista Dunlap
 *
 * Logging time, choices, and results of each game in a separate file
 */

//Inlcluding libraries needed
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	//Declaring outstream variable
	ofstream toFile;

	//Opening file to write to
	toFile.open("RPSLog.txt");

	//Error checking to make sure file is open and working
	if(!toFile.is_open()) {

		cout << "Error opening file.";

	}
	
	//Seeding rand() & declaring/intializing userChoice keepPlaying gamesWon gamesLost & gamesTied
	srand( time(0) );
	char userChoice;
	char keepPlaying = 'Y';
	int gamesWon = 0;
	int gamesLost = 0;
	int gamesTied = 0;
	
	//Using while loop to allow player to play more than one round
	while (keepPlaying == 'Y' || keepPlaying == 'y') {

		toFile << "Time: " << time(0) << " ";

		//Welcoming Player & Asking for/Inputting players choice
		cout << "Welcome to a riveting round of Rock, Paper, Scissors!" << endl;
		cout << "Please enter R, P or S." << endl << endl;
		cout << "Player Choice: ";
		cin >> userChoice;
		
		//Outputting userChoice
		//Writing to file players choice
		if (userChoice == 'R' || userChoice == 'r') {
			cout << endl << "Player has chosen Rock." << endl;
			toFile << "Human: Rock. ";
		}
		else if (userChoice == 'P' || userChoice == 'p') {
			cout << endl << "Player has chosen Paper." << endl;
			toFile << "Human: Paper. ";
		}

		else if (userChoice == 'S'|| userChoice == 's') {
			cout << endl << "Player has chosen Scissors." << endl;
			toFile << "Human: Scissors. ";
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
		//Writing to file computers choice
		if (computerChoiceChar == 'R') {
			cout << "Computer has chosen Rock." << endl << endl;
			toFile << "Computer: Rock. ";
		}
		else if (computerChoiceChar == 'P') {
			cout << "Computer has chosen Paper." << endl << endl;
			toFile << "Computer: Paper. ";
		}
		else {
			cout << "Computer has chosen Scissors." << endl << endl;
			toFile << "Computer: Scissors. ";
		}
		
		//Using if/else statements to print the winner & Add to gamesWon, gamesLost & gamesTied
		//Incrementing gamesWon/gamesLost/gamesTied based on outcome
		//Writing to file whether player lost/won/tied
		if (userChoice == 'R' || userChoice == 'r') {
			if (computerChoiceChar == 'R') {
				cout << "Rock and Rock is a tie!" << endl;
				++gamesTied;
				toFile << "= T" << endl;
			}
			else if (computerChoiceChar == 'P') {
				cout << "Paper beats Rock! Computer Wins!" << endl;
				++gamesLost;
				toFile << "= L" << endl;
			}
			else if (computerChoiceChar == 'S') {
				cout << "Rock beats Scissors! Player Wins!" << endl;
				++gamesWon;
				toFile << "= W" << endl;
			}
		}
		else if (userChoice == 'P' || userChoice == 'p') {
			if (computerChoiceChar == 'R') {
				cout << "Paper beats Rock! Player Wins!" << endl;
				++gamesWon;
				toFile << "= W" << endl;
			}
			else if (computerChoiceChar == 'P') {
				cout << "Paper and Paper is a tie!" << endl;
				++gamesTied;
				toFile << "= T" << endl;
			}
			else if (computerChoiceChar == 'S') {
				cout << "Scissors beats Paper! Computer Wins!" << endl;
				++gamesLost;
				toFile << "= L" << endl;
			}
		}
		else {
			if (computerChoiceChar == 'R') {
				cout << "Rock beats Scissors! Computer Wins!" << endl;
				++gamesLost;
				toFile << "= L" << endl;
			}
			else if (computerChoiceChar == 'P') {
				cout << "Scissors beats Paper! Player Wins!" << endl;
				++gamesWon;
				toFile << "= W" << endl;
			}
			else if (computerChoiceChar == 'S') {
				cout << "Scissors and Scissors is a tie!" << endl;
				++gamesTied;
				toFile << "= T" << endl;
			}
		}

		//Asking user if they would like to keep playing & stores answer into keepPlaying
		cout << "Would you like to play again? (Y/N)" << endl;
		cin >> keepPlaying;
	}

	//Printing all games won/lost/tied
	cout << endl << "You won " << gamesWon << " game(s), lost " << gamesLost << " game(s), and tied " << gamesTied << " game(s)." << endl;
	cout << "Thanks for playing!" << endl;

	//Closing file
	toFile.close();

	return 0;
  }
