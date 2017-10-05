/* CSCI 261 Lab 4A: Input & Print an Array
 *
 * Author: Krista Dunlap
 *
 * Allowing a user to input an array and then printing it
 */

//Inlcluding libraries needed
#include <iostream>
using namespace std;

int main() {

	//Declaring array size and array
	const int ARRAY_SIZE = 15;
	int userArray[ARRAY_SIZE];

	//Prompting user for input
	cout << "Please enter 15 whole numbers." << endl;

	//Using a loop to input numbers into the array
	for(int i = 0; i < ARRAY_SIZE; ++i) {

		cout << "Number " << (i+1) << ": ";

		cin >> userArray[i];

		cout << endl;

	}

	cout << "The numbers are: ";

	//Using a loop to output the numbers
	for(int i = 0; i < ARRAY_SIZE; ++i) {

		cout << userArray[i] << " ";

	}

	//Ending sentence
	cout << endl << "Have a nice day!" << endl;


	return 0;
}
