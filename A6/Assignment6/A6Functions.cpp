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

	for(unsigned int i = 0; i < words.size(); ++i) {

		if(currentWord == words.at(i).word) {
			found = true;

		}

	}

	return found;

}

void addToCount(string currentWord, vector<WordCount>& words) {

	int wordIndex = 0;

	for(unsigned int i = 0; i < words.size(); ++i) {

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

	for(unsigned int i = 0; i < currentWord.length(); ++i) {

		if( ispunct(currentWord.at(i)) ) {

			currentWord.erase(i, 1);

			--i;

		}

	}

	return;

}

/*bool compareAlphabet(const WordCount& a, const WordCount& b) {

    return a.word < b.word;

}

void alphabetize(vector<WordCount>& words) {

	sort(words.begin(), words.end(), compareAlphabet);

	return;

}*/

void alphabetize(vector<WordCount>& words, int SIZE, int pos) {

	if(pos == (SIZE - 2)) {

		if(words.at(pos).word > words.at(pos+1).word) {

			WordCount swapWord = words.at(pos);

			words.at(pos) = words.at(pos+1);

			words.at(pos+1) = swapWord;

		}

	}

	else {

		WordCount swapWord = words.at(pos);

		WordCount lowestWord = words.at(pos);

		int index = pos;

		for(int i = pos; i < SIZE; ++i) {

			if(words.at(i).word < lowestWord.word) {

				lowestWord = words.at(i);

				index = i;

			}

		}

		words.at(pos) = lowestWord;

		words.at(index) = swapWord;

		alphabetize(words, SIZE, (pos+1) );

	}

	return;

}

/*void alphabetize(vector<WordCount>& words, const int SIZE) {
	
	for(int i = 0; i < SIZE; ++i) {
		
		WordCount lowestWord = words.at(i);
		
		WordCount swapWord = words.at(i);
		
		int index = i;
		
		for(int j = i; j < SIZE; ++j) {
			
			if(words.at(j).word < lowestWord.word) {
				
				lowestWord = words.at(j);
				
				index = j;
				
			}
			
		}
		
		words.at(index) = swapWord;
		
		words.at(i) = lowestWord;
		
	}
	
}*/

void printWordCount(vector<WordCount>& words) {

	for(unsigned int i = 0; i < words.size(); ++i) {

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

	for(unsigned int i = 0; i < words.size(); ++i) {

		if(words.at(i).count > maxCount.count) {

			maxCount = words.at(i);

		}

	}

	for(unsigned int i = 0; i < words.size(); ++i) {

		if(words.at(i).count == maxCount.count) {

			mostFreq.push_back(words.at(i));

		}

	}

	return;

}

void findLeastFreq(const vector<WordCount>& words, vector<WordCount>& leastFreq) {

	WordCount minCount = words.at(0);

	for(unsigned int i = 0; i < words.size(); ++i) {

		if(words.at(i).count < minCount.count) {

			minCount = words.at(i);

		}

	}

	for(unsigned int i = 0; i < words.size(); ++i) {

	if(words.at(i).count == minCount.count) {

		leastFreq.push_back(words.at(i));

	}

}

	return;

}

void printMostFreq(const vector<WordCount>& mostFreq) {

	cout << "The most frequent word(s): ";

	for(unsigned int i = 0; i < mostFreq.size(); ++i) {

		cout << mostFreq.at(i).word << " with " << mostFreq.at(i).count << " occurance(s). ";

	}

	return;

}

void printLeastFreq(const vector<WordCount>& leastFreq) {

	cout << "The least frequent word(s): ";

	for(unsigned int i = 0; i < leastFreq.size(); ++i) {

		cout << leastFreq.at(i).word << " with " << leastFreq.at(i).count << " occurance(s). ";

	}

	return;

}
