/* CSCI 261 Lab 6B: Translate the Moosage
 *
 * Author: Krista Dunlap
 *
 * FILLLLLLLLLLLLLLLLLLLl
 */

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ifstream fromFile;
	fromFile.open("secretMessage.txt");

	if(!fromFile.is_open()) {

		cout << "Could not open secretMessage.txt" << endl;

	}

	ofstream toFile;
	toFile.open("decipheredMessage.txt");

	if(!toFile.is_open()) {

		cout << "Could not open decipheredMessage.txt" << endl;

	}

	char currentChar;
	char inputChar;

	while(!fromFile.eof()) {

		fromFile >> currentChar;

		if(currentChar == '\n') {

			inputChar = '\n';

			toFile << ;

		}

		if(currentChar == '~') {

			inputChar = ' ';

			toFile << inputChar;

		}

		else {

			inputChar = (currentChar + 1);

			toFile << inputChar;

		}

	}

	fromFile.close();
	toFile.close();

	return 0;

}
