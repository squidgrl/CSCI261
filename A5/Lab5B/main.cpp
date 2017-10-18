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

int main() {

	//Initial Hello Message
	cout << "Hello and welcome! Please enter as many non-negative numbers as you would like. Enter -1 to stop." << endl;

	//Declaring/intializing userVector, currentNum, minNum, maxNum
	vector<int> userVector;
	int currentNum = -3;
	int minNum;
	int maxNum;

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

	//Using a loop to figure out the smallest number
	for(int i = 0; i < userVector.size(); ++i) {

		minNum = userVector.at(0);

		

	}

	return 0;
}
