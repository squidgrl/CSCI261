/*

CSCI 261 : Section A

Name: Andrew Leeka

*/

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Problem {
    
    public:
        
        // default constructor, contains all the problems and their correct answers
        Problem();
        
        // call to get the first problem
        string getProblem1();
        
        // call to get the second problem
        string getProblem2();
    
        // call to get the third problem
        string getProblem3();
    
        // boolean to check the first answer
        bool checkAnswer1(const int&);
    
        // boolean to check the second answer
        bool checkAnswer2(const int&);
        
        // boolean to check the theird answer
        bool checkAnswer3(const int&);
    
        // contains the game information
        void introduction();
        
    private:
        
        // private valuse for all the mentioned above
        int _answer1;
        int _answer2;
        int _answer3;
        string _problem1;
        string _problem2;
        string _problem3;
};