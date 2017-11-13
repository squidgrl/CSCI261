/* CSCI 261
 * Lab7B Functions
 * Author: Krista Dunlap
*/

#include <iostream>
#include "Lab7BFunctions.h"
#include "TriangleClass.h"
using namespace std;

void printSides(double side1, double side2, double side3) {

	cout << "The sides of this triangle are now " << side1 << ", " << side2 << " and " << side3 << ". ";

	return;

}

void printIfTriangle(bool valid) {

	if(valid) {

		cout << "This is a triangle." << endl;

	}

	else {
		cout << "This is not a triangle." << endl;
	}

	return;

}
