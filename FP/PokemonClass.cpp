/* CSCI261 Final Project: Pokemon Class
 *
 * Description: Declaration file for Pokemon Class
 *
 * Author: Krista Dunlap
 *
 */

#include "PokemonClass.h"
#include "types.h"
#include "status.h"

Pokemon::Pokemon() {

	name = "Pokemon";
	type1 = 0;
	type2 = -1;
	maxHP = 100;
	currHP = maxHP;
	speed = 1;
	attack = 1;
	defense = 1;
	specialAttack = 1;
	specialDefense = 1;
	accuracy = 1.0;
	evasiveness = 1.0;
	status = 0;

}

Pokemon::Pokemon(string name) {

	ifstream readFile;
	readFile.open(name);

	if(!readFile.is_open()) {

		cerr << "Could not open file" << endl;


	}

	string temp;

	getline(readFile,temp);
	type1 = stoi(temp);

	getline(readFile,temp);
	type2 = stoi(temp);

	getline(readFile,temp);
	maxHP = stoi(temp);

	getline(readFile,temp);
	speed = stoi(temp);

	getline(readFile,temp);
	attack = stoi(temp);

	getline(readFile,temp);
	defense = stoi(temp);

	getline(readFile,temp);
	specialAttack = stoi(temp);

	getline(readFile,temp);
	specialDefense = stoi(temp);

	getline(readFile,temp);
	DamageMove tempMove1(temp);
	move1 = tempMove1;

	getline(readFile,temp);
	DamageMove tempMove2(temp);
	move2 = tempMove2;

	getline(readFile,temp);
	DamageMove tempMove3(temp);
	move3 = tempMove3;

	getline(readFile,temp);
	DamageMove tempMove4(temp);
	move4 = tempMove4;

	this->name = name;
	currHP = maxHP;
	accuracy = 1.0;
	evasiveness = 1.0;
	status = 0;

}

string Pokemon::getName() {

	return name;

}

int Pokemon::getType1() {

	return type1;

}

int Pokemon::getType2() {

	return type2;

}


int Pokemon::getMaxHP() {

	return maxHP;

}

int Pokemon::getCurrHP() {

	return currHP;

}

void Pokemon::setCurrHP(int newCurrHP) {

	currHP = newCurrHP;
	return;

}

int Pokemon::getSpeed() {

	return speed;

}

int Pokemon::getAttack() {

	return attack;

}

int Pokemon::getDefense() {

	return defense;

}

int Pokemon::getSpecialAttack() {

	return specialAttack;

}

void Pokemon::setSpecialAttack(int newSpecialAttack) {

	specialAttack = newSpecialAttack;
	return;

}

int Pokemon::getSpecialDefense() {

	return specialDefense;

}

void Pokemon::setSpecialDefense(int newSpecialDefense) {

	specialDefense = newSpecialDefense;
	return;

}

double Pokemon::getAccuracy() {

	return accuracy;

}

double Pokemon::getEvasiveness() {

	return evasiveness;

}

void Pokemon::setStatus(int newStatus) {

	status = newStatus;
	return;

}

int Pokemon::getStatus() {

	return status;

}

bool Pokemon::isDead() {

	return (currHP <= 0);

}

DamageMove Pokemon::getMove1() {

	return move1;

}

DamageMove Pokemon::getMove2() {

	return move2;

}

DamageMove Pokemon::getMove3() {

	return move3;

}

DamageMove Pokemon::getMove4() {

	return move4;

}

void Pokemon::printPokemon() {

	cout << "Name: " << getName() << endl;
	cout << "Level: " << getLevel() << endl;
	cout << "Type1: " << types[getType1()] << endl;
	cout << "Type2: " << types[getType2()] << endl;
	cout << "MaxHP: " << getMaxHP() << endl;
	cout << "CurrHP: " << getCurrHP() << endl;
	cout << "Speed: " << getSpeed() << endl;
	cout << "Attack: " << getAttack() << endl;
	cout << "Defense: " << getDefense() << endl;
	cout << "SpecialAttack: " << getSpecialAttack() << endl;
	cout << "SpecialDefense: " << getSpecialDefense() << endl;
	cout << "Accuracy: " << (getAccuracy()*100) << "%" << endl;
	cout << "Evasiveness: " << (getEvasiveness()*100) << "%" << endl;

	cout << endl << "The moves for this Pokemon are " << endl;
	cout << move1.getName() << endl;
	cout << move2.getName() << endl;
	cout << move3.getName() << endl;
	cout << move4.getName() << endl;

	return;

}

void Pokemon::printMoves() {

	cout << "Move 1" << endl;
	move1.printMove();
	cout << endl << endl;

	cout << "Move 2" << endl;
	move2.printMove();
	cout << endl;

	cout << "Move 3" << endl;
	move3.printMove();
	cout << endl;

	cout << "Move 4" << endl;
	move4.printMove();
	cout << endl;

	return;

}

void Pokemon::dealDamage(DamageMove move, Pokemon& opponent) {

	cout << name << " used " << move.getName() << endl;

	int intRand = rand() % 101;
	double effectiveness = intRand / 100.0;
	double chance = (move.getAccuracy() * accuracy)/(opponent.getEvasiveness());

	if(effectiveness > chance) {
		cout << "...but it missed!" << endl << endl;
		return;
	}

	double modifier = 1.0;

	modifier *= chart[move.getType()][opponent.getType1()];
	modifier *= chart[move.getType()][opponent.getType2()];

	if(modifier < 1.0) {
		cout << "It wasn't very effective..." << endl;
	}

	else if(modifier > 1.0) {
		cout << "It was super effective!" << endl;
	}

	if(type1 == move.getType() || type2 == move.getType()) {
		modifier *= 1.5;
	}

	int iRandom = (rand() % 16) + 85;
	double dRandom = static_cast<double> (iRandom) / 100.0;
	modifier *= dRandom;

	double levelCalc = ((2.0*level)/5.0)+2.0;

	double dDamage = levelCalc*(move.getPower()/50.0);

	if(move.getName() == "Venoshock" && opponent.getStatus() == PSN) {
		dDamage *= 2.0;
	}

	else if(move.getName() == "Brine" && opponent.getCurrHP() < (opponent.getMaxHP()/2)) {
		dDamage *= 2.0;
	}

	if(!move.getIsSpecial()) {
		dDamage *= static_cast<double>(attack)/opponent.getDefense();
	}

	else {
		dDamage *= static_cast<double>(specialAttack)/opponent.getSpecialDefense();
	}

	dDamage += 2.0;
	dDamage *= modifier;

	int iDamage = static_cast<int> (dDamage);

	cout << "It hit for " << iDamage << " damage!" << endl;

	opponent.setCurrHP(opponent.getCurrHP() - iDamage);

	if(move.getName() == "Sludge Bomb" && opponent.getType1() != POISON && opponent.getType2() != POISON && opponent.getStatus() == NON) {
		int random = rand() % 101;
		if(random <= 30) {
			opponent.setStatus(PSN);
			cout << opponent.getName() << " was poisoned..." << endl;
		}
	}

	if(move.getName() == "Inferno" && opponent.getType1() != FIRE && opponent.getType2() != FIRE && opponent.getStatus() == NON) {
		opponent.setStatus(BRN);
		cout << opponent.getName() << " was burned..." << endl;
	}

	if((move.getName() == "Fire Fang" || move.getName() == "Heat Wave") && opponent.getType1() != FIRE && opponent.getType2() != FIRE && opponent.getStatus() == NON) {
		int random = rand() % 101;
		if(random <= 10) {
			opponent.setStatus(BRN);
			cout << opponent.getName() << " was burned..." << endl;
		}
	}

	if((move.getName() == "Scald") && opponent.getType1() != FIRE && opponent.getType2() != FIRE && opponent.getStatus() == NON) {
		int random = rand() % 101;
		if(random <= 30) {
			opponent.setStatus(BRN);
			cout << opponent.getName() << " was burned..." << endl;
		}
	}

	cout << endl;

	return;

}

void Pokemon::statusEffect() {

	if(status == BRN) {
		attack /= 2;
		cout << name << " was hurt by its burn." << endl;
		currHP -= maxHP/16;
	}

	else if(status == PSN) {
		cout << name << " was hurt by poison." << endl;
		currHP -= maxHP/8;
	}

}

int Pokemon::getLevel() {

	return level;

}
