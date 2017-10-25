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

void alphebatize(vector<WordCount>& words);

#endif
