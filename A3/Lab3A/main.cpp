/* CSCI 261 Lab 2D: RPS: The Winner Is
 *
 * Author: Krista Dunlap
 *
 * Figuring out who won RPS and outputting who the victor is
 */

//Inlcluding libraries needed
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
   
   //Seeding rand() & declaring userChoice
   srand( time(0) );
   char userChoice;
   
   //Welcoming Player & Asking for/Inputting players choice
   cout << "Welcome to a riveting round of Rock, Paper, Scissors!" << endl;
   cout << "Please enter R, P or S." << endl << endl;
   cout << "Player Choice: ";
   cin >> userChoice;
   
   //Outputting userChoice
   if (userChoice == 'R') {
      cout << endl << "Player has chosen Rock." << endl;
   }
   else if (userChoice == 'r') {
      cout << endl << "Player has chosen Rock." << endl;
   }
   else if (userChoice == 'P') {
      cout << endl << "Player has chosen Paper." << endl;
   }
   else if (userChoice == 'p') {
      cout << endl << "Player has chosen Paper." << endl;
   }
   else if (userChoice == 'S') {
      cout << endl << "Player has chosen Scissors." << endl;
   }
   else if (userChoice == 's') {
      cout << endl << "Player has chosen Scissors." << endl;
   }
   else {
      cout << endl << "Could not understand choice. Please restart program and try again." << endl;
   }
   
   //Declaring computerChoiceInt & computerChoiceChar
   int computerChoiceInt;
   char computerChoiceChar;
   
   //Getting random number (from 0 to 2) for computerChoiceInt
   computerChoiceInt = rand() % 3;
   
   //Translating computer choice int to char
   if (computerChoiceInt == 0) {
      computerChoiceChar = 'R';
   }
   else if (computerChoiceInt == 1) {
      computerChoiceChar = 'P';
   }
   else {
      computerChoiceChar = 'S';
   }
   
   //Outputting computer choice using computerChoiceChar
   if (computerChoiceChar == 'R') {
      cout << "Computer has chosen Rock." << endl << endl;
   }
   else if (computerChoiceChar == 'P') {
      cout << "Computer has chosen Paper." << endl << endl;
   }
   else {
      cout << "Computer has chosen Scissors." << endl << endl;
   }
   
   //Using if/else statements to print the winner
   if (userChoice == 'R' || userChoice == 'r') {
      if (computerChoiceChar == 'R') {
         cout << "Rock and Rock is a tie!" << endl;
      }
      else if (computerChoiceChar == 'P') {
         cout << "Paper beats Rock! Computer Wins!" << endl;
      }
      else if (computerChoiceChar == 'S') {
         cout << "Rock beats Scissors! Player Wins!" << endl;
      }
   }
   else if (userChoice == 'P' || userChoice == 'p') {
      if (computerChoiceChar == 'R') {
         cout << "Paper beats Rock! Player Wins!" << endl;
      }
      else if (computerChoiceChar == 'P') {
         cout << "Paper and Paper is a tie!" << endl;
      }
      else if (computerChoiceChar == 'S') {
         cout << "Scissors beats Paper! Computer Wins!" << endl;
      }
   }
   else {
      if (computerChoiceChar == 'R') {
         cout << "Rock beats Scissors! Computer Wins!" << endl;
      }
      else if (computerChoiceChar == 'P') {
         cout << "Scissors beats Paper! Player Wins!" << endl;
      }
      else if (computerChoiceChar == 'S') {
         cout << "Scissors and Scissors is a tie!" << endl;
      }
   }
   
   return 0;
  }