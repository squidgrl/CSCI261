/* CSCI261 Final Project: Daamage Move Class
 *
 * Description: Declaration file for Damage Move Class
 *
 * Author: Krista Dunlap
 *
 */

#include "DamageMoveClass.h"
#include "types.h"

DamageMove::DamageMove() {

	name = "Damage Move";
	accuracy = 1.0;
	type = 1;
	power = 1;
	isSpecial = 0;

}

DamageMove::DamageMove(string name) {

	ifstream readFile;
	readFile.open(name);

	if(!readFile.is_open()) {

		cerr << "Could not open file" << endl;


	}

	string temp;

	getline(readFile,temp);
	accuracy = stof(temp);

	getline(readFile,temp);
	type = stoi(temp);

	getline(readFile,temp);
	power = stoi(temp);

	getline(readFile,temp);
	isSpecial = stoi(temp);

	this->name = name;


}

string DamageMove::getName() {

	return name;

}

double DamageMove::getAccuracy() {

	return accuracy;

}

int DamageMove::getType() {

	return type;

}

int DamageMove::getPower() {

	return power;

}

bool DamageMove::getIsSpecial() {

	return isSpecial;

}

void DamageMove::printMove() {

	cout << "Name: " << getName() << endl;
	cout << "Type: " << types[getType()] << endl;
	cout << "Accuracy: " << (getAccuracy()*100) << "%" << endl;
	cout << "Power: " << getPower() << endl;

}
