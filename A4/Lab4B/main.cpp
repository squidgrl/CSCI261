/* CSCI 261 Lab 4B: Find the Array Max
 *
 * Author: Krista Dunlap
 *
 * Allowing user to input an array & finding the max of it
 */

//Inlcluding libraries needed
#include <iostream>
using namespace std;

int main() {

	//Declaring array
	int userArray[15];

	//Prompting user for input
	cout << "Please enter 15 whole numbers." << endl;

	//Using a loop to input numbers into the array
	for(int i = 0; i < 15; ++i) {

		cout << "Number " << (i+1) << ": ";

		cin >> userArray[i];

		cout << endl;

	}

	cout << "The numbers are: ";

	//Using a loop to output the numbers
	for(int i = 0; i < 15; ++i) {

		cout << userArray[i] << " ";

	}

	//Ending sentence
	cout << endl << "Have a nice day!" << endl;


	return 0;
}
