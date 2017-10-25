/* CSCI 261
 * Assignment5 Functions
 * Author: Krista Dunlap
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "WordStruct.h"
using namespace std;

bool isAlreadyIncluded(string currentWord, vector<WordCount> words) {

	bool found = false;

	for(int i = 0; i < words.size(); ++i) {

		if(currentWord == words.at(i).word) {
			found = true;

		}

	}

	return found;

}

void addToCount(string currentWord, vector<WordCount>& words) {

	int wordIndex = 0;

	for(int i = 0; i < words.size(); ++i) {

		if(currentWord == words.at(i).word) {

			wordIndex = i;

		}

	}

	words.at(wordIndex).count += 1;

	return;

}

void addToWords(string currentWord, vector<WordCount>& words) {

	WordCount newWord = {currentWord, 1};

	words.push_back(newWord);

	return;

}

void removePunctuation(string& currentWord) {

	for(int i = 0; i < currentWord.length(); ++i) {

		if( ispunct(currentWord.at(i)) ) {

			currentWord.erase(i, 1);

			--i;

		}

	}

	return;

}

void alphebatize(vector<WordCount>& words) {

	return;

}

void printWordCount(vector<WordCount>& words) {

	for(int i = 0; i < words.size(); ++i) {

		cout << "#";
		cout << right << setw(3) << (i+1);
		cout << " ";
		cout << left << setw(8) << words.at(i).word;
		cout << right << setw(2) << ":";
		cout << right << setw(3) << words.at(i).count << endl;

	}

	return;

}
