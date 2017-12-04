/* CSCI261 Final Project: Status Move Class
 *
 * Description: Declaration file for Status Move Class
 *
 * Author: Krista Dunlap
 *
 */

#include "StatusMoveClass.h"
#include "types.h"

StatusMove::StatusMove() {

		name = "Status Move";
		accuracy = 0;
		type = 0;
		amount = 0;
		stat = 0;
		status = 0;

}

StatusMove::StatusMove(string name) {

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
	amount = stoi(temp);

	getline(readFile,temp);
	stat = stoi(temp);

	getline(readFile,temp);
	status = stoi(temp);

	this->name = name;

}

string StatusMove::getName() {

	return name;

}

double StatusMove::getAccuracy() {

	return accuracy;

}

int StatusMove::getType() {

	return type;

}

int StatusMove::getAmount() {

	return amount;

}

int StatusMove::getStat() {

	return stat;

}

int StatusMove::getStatus() {

	return status;

}

