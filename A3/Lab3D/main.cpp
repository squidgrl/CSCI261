/* CSCI 261 Lab 3D: Yahtzee!
 *
 * Author: Krista Dunlap
 *
 * Making two Yahtzee! functions
 */

//Inlcluding libraries needed
#include <iostream>
using namespace std;

//isFours function (sees if die has one or more fours)
bool isFours ( int die1, int die2, int die3, int die4, int die5 ) {

	//Sees if any die has a value of 4 & returns true if one does
	if( (die1 == 4) || (die2 == 4) || (die3 == 4) || (die4 == 4) || (die5 == 4) ) {
		return true;
	}

	//Returns false if no die has value of 4
	else {
		return false;
	}
}

//scoreFours function (gets score)
int scoreFours ( int die1, int die2, int die3, int die4. int die5 ) {

	//Declaring intializing score variable
	int score = 0;

	//Using if statements to add to score based on how many fours player has
	if ( die1 == 4) {
		score += 4;
	}
	if ( die2 == 4) {
		score += 4;
	}
	if ( die3 == 4) {
		score += 4;
	}
	if ( die4 == 4) {
		score += 4;
	}
	if ( die5 == 4) {
		score += 4;
	}
}
