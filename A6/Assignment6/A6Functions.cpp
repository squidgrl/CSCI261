/* CSCI 261
 * Assignment5 Functions
 * Author: Krista Dunlap
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
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

bool compareAlphabet(const WordCount& a, const WordCount& b) {

    return a.word < b.word;

}

void alphabetize(vector<WordCount>& words) {

	sort(words.begin(), words.end(), compareAlphabet);

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

void findMostFreq(const vector<WordCount>& words, vector<WordCount>& mostFreq) {

	WordCount maxCount = words.at(0);

	for(int i = 0; i < words.size(); ++i) {

		if(words.at(i).count > maxCount.count) {

			maxCount = words.at(i);

		}

	}

	for(int i = 0; i < words.size(); ++i) {

		if(words.at(i).count == maxCount.count) {

			mostFreq.push_back(words.at(i));

		}

	}

	return;

}

void findLeastFreq(const vector<WordCount>& words, vector<WordCount>& leastFreq) {

	WordCount minCount = words.at(0);

	for(int i = 0; i < words.size(); ++i) {

		if(words.at(i).count < minCount.count) {

			minCount = words.at(i);

		}

	}

	for(int i = 0; i < words.size(); ++i) {

	if(words.at(i).count == minCount.count) {

		leastFreq.push_back(words.at(i));

	}

}

	return;

}

void printMostFreq(const vector<WordCount>& mostFreq) {

	cout << "The most frequent word(s): ";

	for(int i = 0; i < mostFreq.size(); ++i) {

		cout << mostFreq.at(i).word << " with " << mostFreq.at(i).count << " occurance(s). ";

	}

	return;

}

void printLeastFreq(const vector<WordCount>& leastFreq) {

	cout << "The least frequent word(s): ";

	for(int i = 0; i < leastFreq.size(); ++i) {

		cout << leastFreq.at(i).word << " with " << leastFreq.at(i).count << " occurance(s). ";

	}

	return;

}
