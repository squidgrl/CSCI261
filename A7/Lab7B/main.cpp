/* CSCI 261 Lab 7B: Triangle Class
 *
 * Author: Krista Dunlap
 *
 * Testing Triangle Class
 */

#include <iostream>
#include "TriangleClass.cpp"
#include "Lab7BFunctions.cpp"
using namespace std;

int main() {

	Triangle one;

	cout << "Triangle one:" << endl;

	printSides(one.getSide1(), one.getSide2(), one.getSide3());

	printIfTriangle(one.validate());

	one.setSide1(10);
	one.setSide2(10);
	one.setSide3(100);

	cout << "Triangle one:" << endl;

	printSides(one.getSide1(), one.getSide2(), one.getSide3());

	printIfTriangle(one.validate());

	one.setSide1(3);
	one.setSide2(4);
	one.setSide3(5);

	cout << "Triangle one:" << endl;

	printSides(one.getSide1(), one.getSide2(), one.getSide3());

	printIfTriangle(one.validate());

	cout << endl;

	Triangle two;

	cout << "Triangle two:" << endl;

	printSides(two.getSide1(), two.getSide2(), two.getSide3());

	printIfTriangle(two.validate());

	two.setSide1(6);
	two.setSide2(4);
	two.setSide3(5);

	cout << "Triangle two:" << endl;

	printSides(two.getSide1(), two.getSide2(), two.getSide3());

	printIfTriangle(two.validate());

	cout << endl;

	cout << "The area of triangle one is " << one.getArea() << "." << endl;
	cout << "The perimeter of triangle one is " << one.getPerimeter() << "." << endl;

	cout << "The area of triangle two is " << two.getArea() << "." << endl;
	cout << "The perimeter of triangle two is " << two.getPerimeter() << "." << endl;

	cout << endl;

	if(one.largerThan(two)) {

		cout << "Triangle one is larger than triangle two." << endl;

	}

	else if(two.largerThan(one)) {

		cout << "Triangle two is larger than triangle one." << endl;

	}

	return 0;
}
