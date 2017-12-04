/* CSCI261 Final Project: Status Move Class
 *
 * Description: Definition file for Status Move Class
 *
 * Author: Krista Dunlap
 *
 */

#pragma once
#include <string>
#include "StatusMoveClass.cpp"

class StatusMove {

	public:
		StatusMove();
		StatusMove(string name);
		string getName();
		double getAccuracy();
		int getType();
		int getAmount();
		int getStat();
		int getStatus();

	private:
		string name;
		double accuracy;
		int type;
		int amount;
		int stat;
		int status;

};
