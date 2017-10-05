/* CSCI 261 Lab 4B: Find the Array Max
 *
 * Author: Krista Dunlap
 *
 * Allowing user to input an array & finding the max of it
 */

//Inlcluding libraries needed
#include <iostream>
using namespace std;

//Function to find the max in an array
int arrayMax(int userArray[], int arraySize) {

	int arrayMax = userArray[0];

	for(int i = 0; i < arraySize; ++i) {

		if(userArray[i] > arrayMax) {

			arrayMax = userArray[i];

		}

	}

	return arrayMax;

}

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

	//Calling arrayMax function


	//Ending sentence
	cout << endl << "Have a nice day!" << endl;


	return 0;
}
