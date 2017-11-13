/* CSCI261 Lab7B: Triangle Class
 *
 * Description: Declaration file for Triangle Class
 *
 * Author: Krista Dunlap
 *
 */

#pragma once

class Triangle {

	public:
		Triangle();
		double getSide1();
		void setSide1(double newSide);
		double getSide2();
		void setSide2(double newSide);
		double getSide3();
		void setSide3(double newSide);
		bool validate();
		double getArea();
		double getPerimeter();
		bool largerThan(Triangle &otherTriangle);
		
	private:
		double side1;
		double side2;
		double side3;

};
