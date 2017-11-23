/* A7 - Magic Item: The Magic Book
*
* Desc: Definition file for MagicBook Class
*
* Author: Matt Frankmore
* CSCI261 Section E
*/

#include "MF.h"
#include <iostream>
#include <string>
using namespace std;

//Constructor
MagicBook::MagicBook() {
    _points = 0;
}

//Setter
void MagicBook::setPoints(int ptsToAdd) {
    _points += ptsToAdd;
}

//Getter
int MagicBook::getPoints() {
    return _points;
}

//Functions
void MagicBook::introduction () {
    cout << "Welcome!  This is the Magic Book, if you can get 3 of the 5 riddles correct you win the prize! (Your very own Magic Book!)" << endl;
    cout << "Good Luck & Have Fun!" << endl;
    riddles();      //Calls the riddles function to continue the program
}

//Riddle function which is the core function of the program.  Does all output and calls other functions to updates points if neccessary
void MagicBook::riddles() {
    string answer;
    cout << endl << "INFO: TYPE ALL ANSWERS IN LOWERCASE.  ALL ANSWERS ARE ONE WORD." << endl << endl;      //Simple output prompt telling user how to input answers to the riddles
    
    //All 5 riddles follow the same process: Riddle output, user input, check answer, if correct add points and output message, if not correct output message
    //Riddle 1
    cout << "Riddle 1: What is a word made up of 4 letters, yet is also made up of 3. Sometimes is written with 9 letters, and then with 4. Rarely consists of 6, and never is written with 5." << endl << "Answer: ";
    cin >> answer;
    if ( answer == "correct" ) {
        setPoints(1);
        cout << "Correct! +1 Points!" << endl;
    }
    else {
        cout << "Incorrect.  The correct answer is: 'correct' " << endl;
    }
    cout << endl;
    //End Riddle 1
    
    //Riddle 2
    cout << "I have a face, two arms, and two hands, yet I can not move. I count to twelve, yet I can not speak. I can still tell you something everyday." << endl << "Answer: ";
    cin >> answer;
    if ( answer == "clock" ) {
        setPoints(1);
        cout << "Correct! +1 Points!" << endl;
    }
    else {
        cout << "Incorrect.  The correct answer is: 'clock' "<< endl;
    }
    cout << endl;
    //End Riddle 2
    
    //Riddle 3
    cout << "Your mother's brother's only brother-in-law is asleep on your coach. Who is asleep on your couch?" << endl << "Answer: ";
    cin >> answer;
    if ( answer == "dad" ) {
        setPoints(1);
        cout << "Correct! +1 Points!" << endl;
    }
    else {
        cout << "Incorrect.  The correct answer is: 'dad' " << endl;
    }
    cout << endl;
    //End Riddle 3
    
    //Riddle 4
    cout << "Mr. Smith has 4 daughters. Each of his daughters has a brother. How many children does Mr. Smith have?" << endl << "Answer: ";
    cin >> answer;
    if ( answer == "5" ) {
        setPoints(1);
        cout << "Correct! +1 Points!" << endl;
    }
    else {
        cout << "Incorrect.  The correct answer is: '5' " << endl;
    }
    cout << endl;
    //End Riddle 4
    
    //Riddle 5
    cout << "What has 3 feet but no toes?" << endl << "Answer: ";
    cin >> answer;
    if ( answer == "yard" ) {
        setPoints(1);
        cout << "Correct! +1 Points!" << endl;
    }
    else {
        cout << "Incorrect.  The correct answer is: 'yard' " << endl;
    }
    cout << endl;
    //End Riddle 5
    
    winner();
}

void MagicBook::winner() {
    cout << "You had a total of: " << getPoints() << " Points." << endl;        //Points output
    //Determine if user won the game
    if (getPoints() >= 3) {     
        cout << "Congrats! You Win! Here's your very own Magic Book! " << endl << endl;
        cout <<"     /////|" << endl;
        cout <<"    ///// |" << endl;
        cout <<"   |~~~|  |" << endl;
        cout <<"   |===|  |" << endl;
        cout <<"   | C |  |" << endl;
        cout <<"   | S |  |" << endl;
        cout <<"   | C |  |" << endl;
        cout <<"   | I | /" << endl;
        cout <<"   |===|/" << endl;
        cout <<"   '---'" << endl;
    }
    else {
        cout << "Sorry, you only had " << getPoints() << "point(s) and you needed " << _POINTS_THRESHOLD << " points.  Play again soon!";
    }
}

