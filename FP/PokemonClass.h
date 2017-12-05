/* CSCI261 Final Project: Pokemon Class
 *
 * Description: Definition file for Pokemon Class
 *
 * Author: Krista Dunlap
 *
 */

#pragma once
#include <string>
#include <fstream>
#include "DamageMoveClass.cpp"
using namespace std;

class Pokemon {

	public:
		Pokemon();
		Pokemon(string name);
		string getName();
		int getType1();
		int getType2();
		int getMaxHP();
		int getCurrHP();
		void setCurrHP(int newCurrHP);
		int getSpeed();
		int getAttack();
		int getDefense();
		int getSpecialAttack();
		void setSpecialAttack(int newSpecialAttack);
		int getSpecialDefense();
		void setSpecialDefense(int newSpecialDefense);
		double getAccuracy();
		double getEvasiveness();
		void setStatus(int newStatus);
		int getStatus();
		bool isDead();
		DamageMove getMove1();
		DamageMove getMove2();
		DamageMove getMove3();
		DamageMove getMove4();
		void printPokemon();
		void printMoves();
		void dealDamage(DamageMove move, Pokemon& opponent);
		void statusEffect();
		int getLevel();

	private:
		string name;
		int type1;
		int type2;
		int maxHP;
		int currHP;
		int speed;
		int attack;
		int defense;
		int specialAttack;
		int specialDefense;
		double accuracy;
		double evasiveness;
		int status;
		DamageMove move1;
		DamageMove move2;
		DamageMove move3;
		DamageMove move4;
		static const int level = 100;


};
