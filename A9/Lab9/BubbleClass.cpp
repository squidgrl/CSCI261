/* CSCI261 Lab9A: Bubble Class
 *
 * Description: Definition file for Bubble Class
 *
 * Author: Krista Dunlap
 *
 */

#include "BubbleClass.h"
#include <SFML/Graphics.hpp>

Bubble::Bubble() {
    
    x = 1;
    y = 2;
    currentPosX = 15;
    currentPosY = 15;
    radius = 50;
    circle.setRadius(radius);
    circle.setPosition(currentPosX,currentPosY);
    
}

Bubble::Bubble(double newX, double newY, double newRadius, double newCurrX, double newCurrY) {
    
    x = newX;
    y = newY;
    currentPosX = newCurrX;
    currentPosY = newCurrY;
    circle.setRadius(newRadius);
    
}

double Bubble::getX() {
    
    return x;
    
}

void Bubble::setX(double newX) {
    
    x = newX;
    return;
    
}

double Bubble::getY() {
    
    return y;
    
}

void Bubble::setY(double newY) {
    
    y = newY;
    return;
    
}

double Bubble::getCurrentPosX() {
    
    return currentPosX;
    
}

void Bubble::setCurrentPosX(double newX) {
    
    currentPosX = newX;
    setCirclePos();
    return;
    
}
double Bubble::getCurrentPosY() {
    
    return currentPosY;
    
}
void Bubble::setCurrentPosY(double newY) {
    
    currentPosY = newY;
    setCirclePos();
    return;
    
}

CircleShape Bubble::getCircle() {
    
    return circle;
    
}

void Bubble::setCirclePos() {
    
    circle.setPosition(currentPosX,currentPosY);
    return;
    
}

void Bubble::setCircleRadius(double newRadius) {
    
    radius = newRadius;
    circle.setRadius(radius);
    return;
    
}

double Bubble::getCircleRadius() {
    
    return radius;
    
}

void Bubble::updatePosition() {
    
    currentPosX += x;
    currentPosY += y;
    circle.setPosition(currentPosX, currentPosY);
    return;
    
}
