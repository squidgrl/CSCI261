/* CSCI261 Lab8B: Date Class
 *
 * Description: Definition file for Date Class
 *
 * Author: Krista Dunlap
 *
 */

#include "DateClass.h"
#include <iostream>
using namespace std;

//Default constructor sets date to 12/30/1950
Date::Date() {
	
	month = 12;
	day = 30;
	year = 1950;

}

//Parameterized constructor sets date to parameters
Date::Date(int setMonth, int setDay, int setYear) {
	
	month = setMonth;
	day = setDay;
	year = setYear;

}

//Returns month
int Date::GetMonth() {
	
	return month;

}

//Sets month to parameter
void Date::SetMonth(int setMonth) {
	
	month = setMonth;
	Validate();
	return;

}

//Returns day
int Date::GetDay() {
	
	return day;

}

//Sets day to parameter
void Date::SetDay(int setDay) {
	
	day = setDay;
	Validate();
	return;

}

//Returns year
int Date::GetYear() {
	
	return year;

}

//Sets year to parameter
void Date::SetYear(int setYear) {
	
	year = setYear;
	Validate();
	return;

}

//Prints date in MM/DD/YYYY
void Date::PrintDate() {
	
	cout << GetMonth() << "\\" << GetDay() << "\\" << GetYear();
	return;

}

string Date::GetDate() {

	return to_string(GetMonth()) + to_string(GetDay()) + to_string(GetYear());

}

//Sets date to parameters
void Date::SetDate(int setMonth, int setDay, int setYear) {

	month = setMonth;
	day = setDay;
	year = setYear;
	Validate();
	return;

}

//Returns true if callee date is earlier than parameter date (else returns false)
bool Date::EarlierThan(Date compareDate) {
	
	if(year < compareDate.GetYear()) {
		return true;
	}

	else if(year > compareDate.GetYear()) {
		return false;
	}

	else if(month < compareDate.GetMonth()) {
		return true;
	}

	else if(month > compareDate.GetMonth()) {
		return false;
	}

	else if(day < compareDate.GetDay()) {
		return true;
	}

	else if(day > compareDate.GetMonth()) {
		return false;
	}

	else {
		return false;
	}

}

//Resets date to 12/30/1950
void Date::ResetDate() {

	month = 12;
	day = 30;
	year = 1950;
	return;

}

//Determines if current date is valid and resets if not
void Date::Validate() {

	bool valid = true;

	if(month < 1 || month > 12) {
		valid = false;
	}

	else if(day < 1 || day > 31) {
		valid = false;
	}

	else if(year < 0) {
		valid = false;
	}

	if(valid == false) {
		ResetDate();
	}

	return;

}
