/* CSCI261 Assignment7: Magic Item Class
 *
 * Description: Definition file for Magic Item Class
 *
 * Author: Krista Dunlap
 *
 */

#pragma once

#include <string>
using namespace std;

class MagicItem {

public:
	MagicItem();
	string getShape();
	void introduction();
	void getAction();
	void clean();
	void sell();
	void trash();
	void genie();
	void revealPrize();

private:
	string prize;
	string shape;
	string actionChoice;
	string wishChoice;

};
