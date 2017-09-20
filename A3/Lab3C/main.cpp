/* CSCI 261 Lab 3C: Multiplication Tables
 *
 * Author: Krista Dunlap
 *
 * Calculating multiplication tables
 */

//Inlcluding libraries needed
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	//Declaring userNum
	int userNum = 0;

	//Using a while loop to keep prompting until a correct number is input)
	while (userNum <= 2 || userNum >= 50) {

		//Asking user for a number between 2 & 50
		cout << "Please enter a number between 2 and 50." << endl;
		cin >> userNum;
	}

	//Printing Top Row
	for (int i = 1; i <= userNum; ++i) {
		cout << right << setw(5) << i;
	}
		cout << endl;

	return 0;
  }
  
