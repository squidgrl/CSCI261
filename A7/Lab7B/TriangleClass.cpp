/* CSCI261 Lab7B: Triangle Class
 *
 * Description: Definition file for Triangle Class
 *
 * Author: Krista Dunlap
 *
 */

#include "TriangleClass.h"
#include <cmath>
using namespace std;

//Default constructor
Triangle::Triangle() {

	side1 = 1;
	side2 = 1;
	side3 = 1;

}

//Returns side1
double Triangle::getSide1() {

	return side1;

}

//Sets argument as side1
void Triangle::setSide1(double newSide) {

	side1 = newSide;

}

//Returns side2
double Triangle::getSide2() {

	return side2;

}

//Sets argument as side2
void Triangle::setSide2(double newSide) {

	side2 = newSide;

}

//Returns side3
double Triangle::getSide3() {

	return side3;

}

//Sets argument as side3
void Triangle::setSide3(double newSide) {

	side3 = newSide;

}

//Returns true if sides make up a triangle
bool Triangle::validate() {

	int howManyTrue = 0;

	if((side2+side3) > side1) {
		++howManyTrue;
	}

	if((side1+side3) > side2) {
		++howManyTrue;
	}

	if((side1+side2) > side3) {
		++howManyTrue;
	}

	if(howManyTrue == 3) {
		return true;
	}

	else {
		return false;
	}

}

//Returns area of triangle
double Triangle::getArea() {

	double s;
	double area;

	s = (side1+side2+side3);
	s = s/2;

	area = (s-side1)*(s-side2)*(s-side3);
	area = area*s;
	area = sqrt(area);

	return area;

}

//Returns perimeter of triangle
double Triangle::getPerimeter() {

	double perimeter;

	perimeter = side1+side2+side3;

	return perimeter;

}

//Returns true if classee's area is larger than argument triangle
bool Triangle::largerThan(Triangle &otherTriangle) {

	double myArea = getArea();
	double otherArea = otherTriangle.getArea();

	if(myArea > otherArea) {
		return true;
	}
	else {
		return false;
	}

}
