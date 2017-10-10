/* CSCI 261
 * Assignment4 Functions
 * Author: Krista Dunlap
*/

#include <iostream>
using namespace std;

//Printing out current solved puzzle
void printCurrentPuzzle(char guessArray[], const int SIZE) {

	for(int i = 0; i < SIZE; ++i) {

		cout << guessArray[i] << " ";

	}

}

//Returning t/f if letter has been guessed
bool isSolved(char guessArray[], const char wordArray[], const int SIZE) {

	int correctLetters = 0;

	for(int i = 0; i < SIZE; ++i) {

		if(guessArray[i] == wordArray[i]) {

			++correctLetters;

		}
	
	}

	if(correctLetters == SIZE) {

		return true;

	}

	else {

		return false;

	}

}


//Change current puzzle
