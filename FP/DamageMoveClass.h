/* CSCI261 Final Project: Damage Move Class
 *
 * Description: Definition file for Damage Move Class
 *
 * Author: Krista Dunlap
 *
 */

#pragma once
#include <string>
using namespace std;

class DamageMove {

	public:
		DamageMove();
		DamageMove(string name);
		string getName();
		double getAccuracy();
		int getType();
		int getPower();
		bool getIsSpecial();
		void printMove();

	private:
		string name;
		double accuracy;
		int type;
		int power;
		bool isSpecial;

};
