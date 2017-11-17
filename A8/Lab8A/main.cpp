/* CSCI 261 Lab 8A: Dates
 *
 * Author: Krista Dunlap
 *
 * Testing Triangle Class
 */

#include <iostream>
#include "DateClass.cpp"
using namespace std;

int main() {

	//Creating variable first of type Date (using default constructor)
	Date first;

	//Creating variable second of type Date (using parameterized constructor)
	Date second(8,1,1876);

	//Using getMonth(), getDay() and getYear() functions to print date
	cout << "The first date is ";
	cout << first.getMonth() << "\\" << first.getDay() << "\\" << first.getYear() << endl;

	//Using printDate() function to print date
	cout << "The second date is ";
	second.printDate();
	cout << endl;

	//Using setMonth, setDay and setYear functions to change date
	first.setMonth(11);
	first.setDay(15);
	first.setYear(2017);

	//Printing changed date to make sure it has been changed correctly
	cout << "The first date is now ";
	first.printDate();
	cout << endl;

	//Using setDate function to change date
	first.setDate(12,16,2018);

	//Printing changed date to make sure it has been changed correctly
	cout << "The first date is now ";
	first.printDate();
	cout << endl;

	//Seeing if validate function is used correctly within setMonth function
	first.setMonth(0);
	cout << "If I try to set the month as 0, the first date is now ";
	first.printDate();
	cout << endl;

	//Resetting date to valid date
	first.setDate(11,16,2017);
	cout << "The first date is now ";
	first.printDate();
	cout << endl;

	//Seeing if validate function is used correctly within setDay function
	first.setDay(45);
	cout << "If I try to set the day as 45, the first date is now ";
	first.printDate();
	cout << endl;

	//Resetting date to valid date
	first.setDate(11,16,2017);
	cout << "The first date is now ";
	first.printDate();
	cout << endl;

	//Seeing if validate function is used correctly within setYear function
	first.setYear(-5);
	cout << "If I try to set the year as -5, the first date is now ";
	first.printDate();
	cout << endl;

	return 0;
}
