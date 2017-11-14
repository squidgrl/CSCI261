/* CSCI 261 Assignment 7: Magic Item
 *
 * Author: Krista Dunlap
 *
 * FILLLLLLLLL
 */

#include <iostream>
#include <string>
#include "MagicItemClass.cpp"
using namespace std;

int main() {

	//Creates magic item called thing
	MagicItem thing;

	//Introduces magic item
	thing.introduction();

	//Allows user to pick action
	thing.getAction();

	//Reveals user's prize
	thing.revealPrize();	

	return 0;
}
