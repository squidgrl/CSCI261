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

Triangle::Triangle() {

	side1 = 1;
	side2 = 1;
	side3 = 1;

}

double Triangle::getSide1() {

	return side1;

}

void Triangle::setSide1(double newSide) {

	side1 = newSide;

}

double Triangle::getSide2() {

	return side2;

}

void Triangle::setSide2(double newSide) {

	side2 = newSide;

}

double Triangle::getSide3() {

	return side3;

}

void Triangle::setSide3(double newSide) {

	side3 = newSide;

}

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

double Triangle::getPerimeter() {

	double perimeter;

	perimeter = side1+side2+side3;

	return perimeter;

}

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
