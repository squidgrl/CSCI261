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
	vector<WordCount> mostFreq;
	vector<WordCount> leastFreq;

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

	alphabetize(words);

	printWordCount(words);

	findMostFreq(words, mostFreq);

	findLeastFreq(words, leastFreq);

	printMostFreq(mostFreq);

	cout << endl;

	printLeastFreq(leastFreq);

	cout << endl;

	return 0;

}
