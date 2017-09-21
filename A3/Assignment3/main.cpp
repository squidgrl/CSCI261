/* CSCI 261 Assignment 3: Guess the Number
 *
 * Author: Krista Dunlap
 *
 * A game of guess the number
 */

//Inlcluding libraries needed
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {

	//Seeding rand() and decalring/intializing variables/constants
	srand(time(0));
	int compNum = 0;
	int userNum = 101;
	int numTries = 0;
	const int LOW = 0;
	const int HIGH = 100;
	const int TOO_CLOSE_DIFFERENCE = 5;
	const int TOO_HIGH_DIFFERENCE = 25;

	//Picking random number for user to guess
	compNum = rand() % 101;

	//Introducing game
	cout << "Welcome to a game of guess the number!" << endl;

	//Using while loop to keep going while user has not guessed right number
	while (userNum != compNum) {

		//Incrementing numTries
		++numTries;

		//Asking user to enter a number between 0 and 100 & inputting number into userNum
		cout << "Please pick a number between 0 and 100: "
		cin >> userNum;

		//Using if else statements to see if user has guessed correctly & how close guess was
		if (userNum == compNum) {
			cout << "That is correct! You guessed the number in " << numTries << " tries." << endl;
			continue;
		}
		else if ( userNum < compNum) {
			cout << "Too low!";
			
		}
	}

	return 0;
}
