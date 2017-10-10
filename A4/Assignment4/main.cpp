/* CSCI 261 Assignment 4: Wheel of Fortune!
 *
 * Author: Krista Dunlap
 *
 * A game of hangman
 */

//Inlcluding libraries needed
#include <iostream>
#include <cctype>
#include "A4Functions.h"
#define SIZE 6
using namespace std;

int main() {

	//Declaring/intializing constants and arrays
	//const int SIZE = 6;
	const char theWord[SIZE] = {'S','Q','U','I','D','S'};
	char userWord[SIZE] = {'_','_','_','_','_','_'};
	char previousGuesses[(12+SIZE)];
	int incorrectGuesses = 0;
	int totalGuesses = 0;
	char currentGuess;
	bool guessedBefore;
	bool inAnswer;

	//Intializing previous guesses with a loop
	for(int i = 0; i < (12+SIZE); ++i) {

		previousGuesses[i] == ' ';
	
	}

	cout << "Welcome to Wheel of Fortune!" << endl;

	//Main loop (to keep prompting for a guess)
	while( incorrectGuesses < 12 && !(isSolved(userWord, theWord, SIZE)) ) {

		cout << "Take a guess! ";
		printCurrentPuzzle(userWord, SIZE);
		cout << endl;

		cout << "Your guess: ";

		cin >> currentGuess;

		currentGuess = toupper(currentGuess);

		cout << endl;

		guessedBefore = false;

		inAnswer = false;

		for(int i = 0; i < (12+SIZE); ++i) {

			if(currentGuess == previousGuesses[i]) {

				guessedBefore = true;

			}

		}

		if(guessedBefore == true) {

			cout << "You already guessed a(n) " << currentGuess << endl << endl;

			continue;

		}

		else {

			for(int i = 0; i < SIZE; ++i) {

				if(currentGuess == theWord[i]) {

					inAnswer = true;

					userWord[i] = currentGuess;

					previousGuesses[totalGuesses] = currentGuess;

					++totalGuesses;
			
				}

			}

			if(inAnswer == true) {

				cout << "There is a(n) " << currentGuess << "!" << endl << endl;

			}

			if(inAnswer == false) {

				cout << "There is no " << currentGuess;

				previousGuesses[totalGuesses] = currentGuess;

				++incorrectGuesses;

				++totalGuesses;

				cout << ". You have " << (12 - incorrectGuesses) << " incorrect guesses left." << endl << endl;

			}

		}

	}

	if(isSolved(userWord,theWord,SIZE)) {

		cout << "You guessed the word! " << endl;

		printCurrentPuzzle(userWord,SIZE);

		cout << endl;

	}

	else {

		cout << "You ran out of guesses! You lose. Please try again." << endl;

		printCurrentPuzzle(userWord,SIZE);

		cout << endl;

	}

	return 0;
}
