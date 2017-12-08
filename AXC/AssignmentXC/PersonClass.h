/* CSCI261 AssignmentXC: Person Class
 *
 * Description: Declaration file for Person Class
 *
 * Author: Krista Dunlap
 *
 */

#pragma once
#include <fstream>
#include <iostream>

//Including string library
#include <string>
using namespace std;

class Person {
    
    public:
        Person();
        bool validate();
        void input(istream& input);
        void output(ostream& output);
        int getHeight();
    
    private:
        string firstName;
        string lastName;
        char gender;
        int age;
        double height;
        bool likesMonsterMovies;
        bool likesCantaloupe;
        string boolToWord(bool thing);
    
};
