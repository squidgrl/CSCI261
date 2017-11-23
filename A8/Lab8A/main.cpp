/* CSCI 261 Lab 8A: Dates
 *
 * Author: Krista Dunlap
 *
 * Testing Date Class
 */

#include <iostream>
#include "DateClass.cpp"
using namespace std;

int main() {

	//Creating variable first of type Date (using default constructor)
	Date first;

	//Creating variable second of type Date (using parameterized constructor)
	Date second(8,1,1876);

	//Using GetMonth, GetDay and GetYear functions to print date
	cout << "The first date is ";
	cout << first.GetMonth() << "/" << first.GetDay() << "/" << first.GetYear() << endl;

	//Using PrintDate function to print date
	cout << "The second date is ";
	second.PrintDate();
	cout << endl;

	//Using SetMonth, SetDay and SetYear functions to change date
	first.SetMonth(11);
	first.SetDay(15);
	first.SetYear(2017);

	//Printing changed date to make sure it has been changed correctly
	cout << "The first date is now ";
	first.PrintDate();
	cout << endl;

	//Using SetDate function to change date
	first.SetDate(12,16,2018);

	//Printing changed date to make sure it has been changed correctly
	cout << "The first date is now ";
	first.PrintDate();
	cout << endl;

	//Seeing if validate function is used correctly within SetMonth function
	first.SetMonth(0);
	cout << "If I try to set the month as 0, the first date is now ";
	first.PrintDate();
	cout << endl;

	//Resetting date to valid date
	first.SetDate(11,16,2017);
	cout << "The first date is now ";
	first.PrintDate();
	cout << endl;

	//Seeing if validate function is used correctly within SetDay function
	first.SetDay(45);
	cout << "If I try to set the day as 45, the first date is now ";
	first.PrintDate();
	cout << endl;

	//Resetting date to valid date
	first.SetDate(11,16,2017);
	cout << "The first date is now ";
	first.PrintDate();
	cout << endl;

	//Seeing if validate function is used correctly within SetYear function
	first.SetYear(-5);
	cout << "If I try to set the year as -5, the first date is now ";
	first.PrintDate();
	cout << endl;

	//Resetting date to valid date
	first.SetDate(11,16,2017);
	cout << "The first date is now ";
	first.PrintDate();
	cout << endl;

	//Seeing if validate function is used correctly within SetDate function
	first.SetDate(12,45,1950);
	cout << "If I try to set the date as 12/45/1950, the first date is now ";
	first.PrintDate();
	cout << endl;

	//Testing out EarlierThan function when year is different
	if(first.EarlierThan(second)) {

		first.PrintDate();
		cout << " comes before ";
		second.PrintDate();
		cout << endl;

	}

	else if(!first.EarlierThan(second)) {

		second.PrintDate();
		cout << " comes before ";
		first.PrintDate();
		cout << endl;

	}

	//Testing out EarlierThan function when month is different
	first.SetDate(11,17,2017);
	second.SetDate(12,17,2017);

	if(first.EarlierThan(second)) {

		first.PrintDate();
		cout << " comes before ";
		second.PrintDate();
		cout << endl;

	}

	else if(!first.EarlierThan(second)) {

		second.PrintDate();
		cout << " comes before ";
		first.PrintDate();
		cout << endl;

	}

	//Testing out EarlierThan function when year is different
	first.SetDate(11,20,2017);
	second.SetDate(11,18,2017);

	if(first.EarlierThan(second)) {

		first.PrintDate();
		cout << " comes before ";
		second.PrintDate();
		cout << endl;

	}

	else if(!first.EarlierThan(second)) {

		second.PrintDate();
		cout << " comes before ";
		first.PrintDate();
		cout << endl;

	}

	return 0;
}
