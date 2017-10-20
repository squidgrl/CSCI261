/* CSCI 261 Lab 5B: Vector Usage
 *
 * Author: Krista Dunlap
 *
 * Making Lab4B more flexible using vectors
 */


//Inlcluding libraries needed
#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> userVector) {

	int vectorMax;

	vectorMax = userVector[0];

	for(int i = 0; i < userVector.size(); ++i) {

		if(userVector[i] > vectorMax) {

			vectorMax = userVector[i];

		}

	}

	return vectorMax;

}

int findMin(vector<int> userVector) {

	int vectorMin;

	vectorMin = userVector[0];

	for(int i = 0; i < userVector.size(); ++i) {

		if(userVector[i] < vectorMin) {

			vectorMin = userVector[i];

		}

	}

	return vectorMin;

}

int main() {

	//Initial Hello Message
	cout << "Hello and welcome! Please enter as many non-negative numbers as you would like. Enter -1 to stop." << endl;

	//Declaring/intializing userVector, currentNum
	vector<int> userVector;
	int currentNum = -3;

	//Loop to enter numbers
	while(currentNum != -1) {

		//User can enter numbers
		cout << "Your number is: ";
		cin >> currentNum;

		//If they dont enter -1, it will add the number to the vector
		if(currentNum != -1) {

			userVector.push_back(currentNum);

			continue;

		}

		//If they enter -1 it will exit loop
		else {

			break;

		}	

	}

	//Prints how many numbers were entered
	cout << "Done! You entered " << userVector.size() << " numbers." << endl;

	cout << "The numbers are: ";

	for(int i = 0; i < userVector.size(); ++i) {

		cout << userVector[i] << " ";

	}

	cout << endl << "The smallest number is: " << findMin(userVector) << endl;

	cout << "The largest number is: " << findMax(userVector) << endl;

	cout << "The first number is: " << userVector[0] << endl;

	cout << "The last number is: " << userVector.back() << endl;

	cout << "Have a nice day!" << endl;	

	return 0;
}
