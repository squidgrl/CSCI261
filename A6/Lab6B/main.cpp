/* CSCI 261 Lab 6B: Translate the Moosage
 *
 * Author: Krista Dunlap
 *
 * Deciphering a message from the cows
 */

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	//Opening an in stream to read from the secretMessage.txt file
	ifstream fromFile;
	fromFile.open("secretMessage.txt");

	//Checking to make sure in stream file is open & erroring if not
	if(!fromFile.is_open()) {

		cerr << "Could not open secretMessage.txt" << endl;

		return -1;

	}

	//Opening an out stream to read into the decipheredMessage.txt file
	ofstream toFile;
	toFile.open("decipheredMessage.txt");

	//Checking to make sure out stream file is open & erroring if not
	if(!toFile.is_open()) {

		cerr << "Could not open decipheredMessage.txt" << endl;

		return -1;

	}

	//Declaring currentChar & inputChar
	char currentChar;
	char inputChar;

	//Clearing anything that might already be in the out stream file so that just the deciphered message in it
	toFile.clear();

	//A while loop to read from the file while there is still stuff to read
	while(!fromFile.eof()) {

		currentChar = fromFile.get();

		if(currentChar == '\n') {

			inputChar = '\n';

			toFile << inputChar;

		}

		else if(currentChar == '~') {

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
