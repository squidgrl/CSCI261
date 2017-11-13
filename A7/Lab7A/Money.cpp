/* CSCI261 Lab7A: Money Class
 *
 * Description: Definition file for Money Class
 *
 * Author: Krista Dunlap
 *
 */

#include "Money.h"

//Default Constructor
Money::Money() {

	dollars = 999;
	cents = 99;

}

//Specific Constructor
Money::Money(int d, int c) {

	dollars = d;
	cents = c;

}
