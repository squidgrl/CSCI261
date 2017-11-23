/*

CSCI 261 : Section A

Name: Andrew Leeka

*/

#include "L.h"

#include <iostream>
#include <string>
using namespace std;

// contains all the problems and their correct answers
Problem::Problem() {
    _problem1 = "What is the square root of 25?";
    _problem2 = "I want you to pick any positve number. Once you \n"
        "have a number you should add the next highest number to it. \n"
        "For example if your number was 1, the next highst number is 2. \n"
        "Now add a 9 to that number and then divide it by 2.\n"
        "Almost done.. subtract your orginal number and enter what you have.";
    _problem3 = "Solve the definite integral from 0 to PIE of (1/2)*sin(x)";
    _answer1 = 5;
    _answer2 = 5;
    _answer3 = 1;
}

// call to get the first problem
string Problem::getProblem1() {
    return _problem1;
}

// call to get the second problem
string Problem::getProblem2() {
    return _problem2;
}

// call to geth the third problem
string Problem::getProblem3() {
    return _problem3;
}

// boolean to check first answer
bool Problem::checkAnswer1(const int& guessProblem1) {
    return guessProblem1 == _answer1;
}

// boolean to check second answer
bool Problem::checkAnswer2(const int& guessProblem2) {
    return guessProblem2 == _answer2;
}

// boolean to check third answer
bool Problem::checkAnswer3(const int& guessProblem3) {
    return guessProblem3 == _answer3;
}

// contains the game information 
void Problem::introduction() {
    cout << "I am going to ask you three of the " << endl;
    cout << "most difficult math questions I can " << endl;
    cout << "possible come up with. If you answer them " << endl;
    cout << "correctly then I will use your answers" << endl;
    cout << "and create you an amaizing gift..." << endl;
    cout << endl;
}
