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

	//Creates triangle called one
	Triangle one;

	//Prints triangle one's sides and if it is a valid triangle
	cout << "Triangle one:" << endl;
	printSides(one.getSide1(), one.getSide2(), one.getSide3());
	printIfTriangle(one.validate());

	//Changes one's sides to 10,10 and 100
	one.setSide1(10);
	one.setSide2(10);
	one.setSide3(100);

	//Prints triangle one's sides and if it is a valid triangle
	cout << "Triangle one:" << endl;
	printSides(one.getSide1(), one.getSide2(), one.getSide3());
	printIfTriangle(one.validate());

	//Changes one's sides to 3, 4 and 5
	one.setSide1(3);
	one.setSide2(4);
	one.setSide3(5);

	//Prints triangle one's sides and if it is a valid triangle
	cout << "Triangle one:" << endl;
	printSides(one.getSide1(), one.getSide2(), one.getSide3());
	printIfTriangle(one.validate());

	cout << endl;

	//Creates triangle called two
	Triangle two;

	//Prints triangle two's sides and if it is a valid triangle
	cout << "Triangle two:" << endl;
	printSides(two.getSide1(), two.getSide2(), two.getSide3());
	printIfTriangle(two.validate());

	//Changes two's sides to 6, 4 and 5
	two.setSide1(6);
	two.setSide2(4);
	two.setSide3(5);

	//Prints triangle two's sides and if it is a valid triangle
	cout << "Triangle two:" << endl;
	printSides(two.getSide1(), two.getSide2(), two.getSide3());
	printIfTriangle(two.validate());

	cout << endl;

	//Prints one's area and perimeter
	cout << "The area of triangle one is " << one.getArea() << "." << endl;
	cout << "The perimeter of triangle one is " << one.getPerimeter() << "." << endl;

	//Prints two's area and perimeter
	cout << "The area of triangle two is " << two.getArea() << "." << endl;
	cout << "The perimeter of triangle two is " << two.getPerimeter() << "." << endl;

	cout << endl;

	//Uses largerThan() to determine and print which triangle is larger
	if(one.largerThan(two)) {

		cout << "Triangle one is larger than triangle two." << endl;

	}

	else if(two.largerThan(one)) {

		cout << "Triangle two is larger than triangle one." << endl;

	}

	return 0;
}
