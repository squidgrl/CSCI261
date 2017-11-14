/* CSCI261 Assignment7: Magic Item Class
 *
 * Description: Declaration file for Magic Item Class
 *
 * Author: Krista Dunlap
 *
 */

#include "MagicItemClass.h"

//Default constructor
MagicItem::MagicItem() {

	prize = "undetermined";
	shape = "triangle";

	return;

}

//Returns shape of magic item
string MagicItem::getShape() {

	return shape;

}

//Introduces magic item
void MagicItem::introduction() {

	cout << "You are walking through a desert when you spot something in the sand..." << endl;
	cout << "You have found a strange dusty " << getShape();
	cout << " about the size of your palm. What would you like to do?";
	cout << endl;

	return;

}

//Figures out which action user wants to do to magic item
void MagicItem::getAction() {

	do {

		cout << "(Please input \"clean\", \"sell\" or \"trash\")" << endl;

		cin >> actionChoice;

		if(actionChoice == "clean") {

			clean();

		}

		else if(actionChoice == "sell") {

			sell();
			
		}

		else if(actionChoice == "trash") {

			trash();
			
		}

	} while(actionChoice != "clean" && actionChoice != "sell" && actionChoice != "trash");

}

//Cleans magic item
void MagicItem::clean() {

	cout << "You begin to clean the triangle. You rub the dust off when.....bam! Out pops a genie!!" << endl;

	genie();

	return;

}

//Sells magic item
void MagicItem::sell() {

	cout << "You sell the triangle to a merchant you meet at a bustling city." << endl;

	prize = "5 pieces of gold";

	return;

}

//Trashes magic item
void MagicItem::trash() {

	cout << "You toss the item in the trash and keep walking..." << endl;

	prize = "nothing";

	return;

}

//Genie appears & grants wish
void MagicItem::genie() {

	cout << "The genie greets you, \"Hello, human! You have freed me from my " << getShape();
	cout << ". I will grant you one wish!\"" << endl;

	do {

		cout << "Please enter one wish (\"money\", \"fame\" or \"sandwich\")" << endl;

		cin >> wishChoice;

		if(wishChoice == "money") {

			prize = "1 Million dollars...of Monopoly money";

		}

		else if(wishChoice == "fame") {

			prize = "a DVD copy of \"Fame\"";
			
		}

		else if(wishChoice == "sandwich") {

			prize = "the most delicious, self-replenishing sandwich that will last you the rest of your life";
			
		}

	} while(wishChoice != "money" && wishChoice != "fame" && wishChoice != "sandwich");

}

//Reveals prize
void MagicItem::revealPrize() {

	cout << "You have received " << prize << "!" << endl;

	return;

}
