/* CSCI 261
 * Assignment5 Functions Header
 * Author: Krista Dunlap
*/

#ifndef A6Functions_H
#define A6Functions_H

#include <iostream>
#include "A6Functions.cpp"
using namespace std;

bool isAlreadyIncluded(string currentWord, vector<WordCount> words);

void addToCount(string currentWord, vector<WordCount>& words);

void addToWords(string currentWord, vector<WordCount>& words);

void removePunctuation(string& currentWord);

bool compareAlphabet(const WordCount& a, const WordCount& b);

void alphabetize(vector<WordCount>& words);

void printWordCount(vector<WordCount>& words);

void findMostFreq(const vector<WordCount>& words);

void findLeastFreq(const vector<WordCount>& words);

void printMostFreq(const vector<WordCount>& mostFreq);

void printLeastFreq(const vector<WordCount>& leastFreq);

#endif
