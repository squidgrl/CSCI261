/* CSCI 261 Lab 4B: Find the Array Max
 *
 * Author: Krista Dunlap
 *
 * Lab4A plus finding the max of the array
 */

//Inlcluding libraries needed
#include <iostream>
using namespace std;

//Function to find the max in an array
int findArrayMax(int userArray[], int arraySize) {

	int arrayMax = userArray[0];

	for(int i = 0; i < arraySize; ++i) {

		if(userArray[i] > arrayMax) {

			arrayMax = userArray[i];

		}

	}

	return arrayMax;

}

//Function to find the min in an array
int findArrayMin(int userArray[], int arraySize) {

	int arrayMin = userArray[0];

	for(int i = 0; i < arraySize; ++i) {

		if(userArray[i] < arrayMin) {

			arrayMin = userArray[i];

		}

	}

	return arrayMin;

}


int main() {

	//Declaring/intializing array, array size & array max/min
	const int ARRAY_SIZE = 15;
	int userArray[ARRAY_SIZE];
	int arrayMax = 0;
	int arrayMin = 0;

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

	//Calling findArrayMax function/storing result in variable
	arrayMax = findArrayMax(userArray, ARRAY_SIZE);

	//Printing array max
	cout << endl << "The largest number is: " << arrayMax << "." << endl;

	//Calling findArrayMax function/storing result in variable
	arrayMax = findArrayMin(userArray, ARRAY_SIZE);

	//Printing array max
	cout << endl << "The smallest number is: " << arrayMax << "." << endl;

	//Ending sentence
	cout << endl << "Have a nice day!" << endl;


	return 0;
}
