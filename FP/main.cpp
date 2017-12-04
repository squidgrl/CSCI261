/* CSCI 261 Final Project: Pokemon Battle Simulator
 *
 * Author: Krista Dunlap
 *
 * Testing Magic Items
 */

#include <iostream>
#include <cstdlib>
#include <vector>
#include "PokemonClass.cpp"
using namespace std;

int main() {

	int chosenPoke;

	bool userHasWon = false;

	vector<string> pokes;
	pokes.push_back("Bulbasaur");

	cout << "Welcome to Pokemon Battle Simulator!" << endl;
	cout << "Please choose a Pokemon (Enter the number)." << endl;

	for(int i = 0; i < pokes.size(); ++i) {

		cout << i << ": " << pokes.at(i) << endl;

	}

	cin >> chosenPoke;

	while(chosenPoke > (pokes.size() - 1) || chosenPoke < 0) {
		
		cout << "Please choose a valid number." << endl;

		for(int i = 0; i < pokes.size(); ++i) {

			cout << i << ": " << pokes.at(i) << endl;

		}

		cin >> chosenPoke;

	}

	cout << endl << "You have chosen " << pokes.at(chosenPoke) << "!" << endl;
	Pokemon userPokemon(pokes.at(chosenPoke));

	userPokemon.printPokemon();
	cout << endl;

	char chooseOrRand;

	cout << "Would you like to choose your opponent? (y/n; if not, opponent will be random)" << endl;
	cin >> chooseOrRand;

	chooseOrRand = tolower(chooseOrRand);

	while(chooseOrRand != 'y' && chooseOrRand != 'n') {

		cout << "Please only enter y or n." << endl;
		cin >> chooseOrRand;

		chooseOrRand = tolower(chooseOrRand);

	}

	cout << endl;

	if(chooseOrRand == 'n') {
		
		srand(time(0));

		chosenPoke = rand() % pokes.size();

		cout << pokes.at(chosenPoke) << " was chosen!" << endl;

	}

	else {

		cout << "Please choose your opponent's Pokemon (Enter the number)." << endl;

		for(int i = 0; i < pokes.size(); ++i) {

			cout << i << ": " << pokes.at(i) << endl;

		}

		cin >> chosenPoke;

		while(chosenPoke > (pokes.size() - 1) || chosenPoke < 0) {
			
			cout << "Please choose a valid number." << endl;

			for(int i = 0; i < pokes.size(); ++i) {

				cout << i << ": " << pokes.at(i) << endl;

			}

			cin >> chosenPoke;

		}

		cout << endl << "You have chosen " << pokes.at(chosenPoke) << "!" << endl;

	}

	Pokemon compPokemon(pokes.at(chosenPoke));

	compPokemon.printPokemon();
	cout << endl;

	cout << "The battle has started!" << endl;

	//userPokemon.dealDamage(userPokemon.getMove1(), compPokemon);

	while(true) {

		cout << "Your HP is currently " << userPokemon.getCurrHP() << "." << endl;
		cout << "Your opponent's HP is currently " << compPokemon.getCurrHP() << "." << endl;

		cout << endl << "Please choose a move. (Enter the number)" << endl << endl;
		userPokemon.printMoves();
		cout << endl;

		int currMove;
		cin >> currMove;

		cout << endl;

		int currCompMove = (rand() % 4) + 1;

		int order;

		if(userPokemon.getSpeed() > compPokemon.getSpeed()) {
			order = 0;
		}

		else if(userPokemon.getSpeed() < compPokemon.getSpeed()) {
			order = 1;
		}

		else {
			order = rand() % 2;
		}

		if(order) {

			cout << "The opponent's ";
			switch(currCompMove) {
				case 1:
					compPokemon.dealDamage(compPokemon.getMove1(), userPokemon);
					break;
				case 2:
					compPokemon.dealDamage(compPokemon.getMove2(), userPokemon);
					break;
				case 3:
					break;
				case 4:
					break;
				default:
					break;
			}

			if(userPokemon.isDead()) {
				break;
			}

			switch(currMove) {
				case 1:
					userPokemon.dealDamage(userPokemon.getMove1(), compPokemon);
					break;
				case 2:
					userPokemon.dealDamage(userPokemon.getMove2(), compPokemon);
					break;
				case 3:
					break;
				case 4:
					break;
				default:
					break;
			}

			if(compPokemon.isDead()) {
				userHasWon = true;
				break;
			}

		}

		else {

			switch(currMove) {
				case 1:
					userPokemon.dealDamage(userPokemon.getMove1(), compPokemon);
					break;
				case 2:
					userPokemon.dealDamage(userPokemon.getMove2(), compPokemon);
					break;
				case 3:
					break;
				case 4:
					break;
				default:
					break;
			}

			if(compPokemon.isDead()) {
				userHasWon = true;
				break;
			}

			cout << "The opponent's ";
			switch(currCompMove) {
				case 1:
					compPokemon.dealDamage(compPokemon.getMove1(), userPokemon);
					break;
				case 2:
					compPokemon.dealDamage(compPokemon.getMove2(), userPokemon);
					break;
				case 3:
					break;
				case 4:
					break;
				default:
					break;
			}

			if(userPokemon.isDead()) {
				break;
			}

		}

	}

	if(userHasWon) {
		cout << "The opponent's " << compPokemon.getName() << " has fainted. You've won!" << endl;
	}

	else {
		cout << compPokemon.getName() << " has fainted." << endl << "You blacked out..." << endl;
	}

	return 0;

}
