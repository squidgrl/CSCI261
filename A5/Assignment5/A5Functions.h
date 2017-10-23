/* CSCI 261
 * Assignment5 Functions Header
 * Author: Krista Dunlap
*/

#ifndef A5Functions_H
#define A5Functions_H

#include <iostream>
#include "A5Functions.cpp"
using namespace std;

void printCard(Card card);

void shuffleDeck(vector<Card>& deck);

Card dealNextCard(vector<Card>& deck);

void addPoints(Card currentCard, int& total);

void changePoints(int& total);

void checkInstantBlackJack(vector<Card> currentHand, int& total);

#endif
