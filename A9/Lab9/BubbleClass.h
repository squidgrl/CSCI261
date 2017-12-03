/* CSCI261 Lab9A: Bubble Class
 *
 * Description: Declaration file for Bubble Class
 *
 * Author: Krista Dunlap
 *
 */

#pragma once

//Including SFML library
#include <SFML/Graphics.h>
using namespace sf;

class Bubble {

public:
	Bubble();
	Bubble(double newX, double newY, double newRadius, double newCurrX, double newCurrY);
	double getX();
	void setX(double newX);
	double getY();
	void setY(double newY);
	double getCurrentPosX();
	void setCurrentPosX(double newX);
	double getCurrentPosY();
	void setCurrentPosY(double newY);
	CircleShape getCircle();
	void setCirclePos();
	void setCircleRadius(double newRadius);
	double getCircleRadius();
	void updatePosition();

private:
	CircleShape circle;
	double x;
	double y;
	double currentPosX;
	double currentPosY;
	double radius;

};
