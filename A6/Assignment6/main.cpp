/* CSCI 261 Assignment 6: Sam I Am
 *
 * Author: Krista Dunlap
 *
 * FILLLLLLLLL
 */

//Inlcluding libraries needed
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "WordStruct.h"
#include "A6Functions.h"
using namespace std;

int main() {

	ifstream fromFile;
	fromFile.open("greeneggsandham.txt");

	if(!fromFile.is_open()) {

		cout << "Could not open file.";

	}

	string currentWord;
	vector<WordCount> words;

	while(!fromFile.eof()) {

		fromFile >> currentWord;

		removePunctuation(currentWord);

		if(isAlreadyIncluded(currentWord, words)) {

			addToCount(currentWord, words);

		}

		else {

			addToWords(currentWord, words);

		}	

	}

	fromFile.close();

	/*for(int i = 0; i < words.size(); ++i) {

		cout << words.at(i).word << ": " << words.at(i).count << endl;

	}*/

	//alphabetize(words);

	printWordCount(words);

	return 0;

}
