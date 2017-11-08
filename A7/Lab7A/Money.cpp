/* CSCI261 Lab7A: Money Class
 *
 * Description: Definition file for Money Class
 *
 * Author: Krista Dunlap
 *
 */

#include "Money.h"

Money::Money() {

	dollars = 999;
	cents = 99;

}

Money::Money(int d, int c) {

	dollars = d;

	cents = c;

}
