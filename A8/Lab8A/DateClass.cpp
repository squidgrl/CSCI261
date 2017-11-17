/* CSCI261 Lab8A: Date Class
 *
 * Description: Definition file for Date Class
 *
 * Author: Krista Dunlap
 *
 */

#include "DateClass.h"
#include <iostream>
using namespace std;

Date::Date() {
	
	month = 12;
	day = 30;
	year = 1950;

}

Date::Date(int setMonth, int setDay, int setYear) {
	
	month = setMonth;
	day = setDay;
	year = setYear;

}

int Date::getMonth() {
	
	return month;

}

void Date::setMonth(int setMonth) {
	
	month = setMonth;
	validate();
	return;

}

int Date::getDay() {
	
	return day;

}

void Date::setDay(int setDay) {
	
	day = setDay;
	validate();
	return;

}

int Date::getYear() {
	
	return year;

}

void Date::setYear(int setYear) {
	
	year = setYear;
	validate();
	return;

}

void Date::printDate() {
	
	cout << getMonth() << "\\" << getDay() << "\\" << getYear();
	return;

}

void Date::setDate(int setMonth, int setDay, int setYear) {

	month = setMonth;
	day = setDay;
	year = setYear;
	validate();
	return;

}

bool Date::earlierThan(Date compareDate) {
	
	if(year < compareDate.getYear()) {
		return true;
	}

	else if(year > compareDate.getYear()) {
		return false;
	}

	else if(month < compareDate.getMonth()) {
		return true;
	}

	else if(month > compareDate.getMonth()) {
		return false;
	}

	else if(day < compareDate.getDay()) {
		return true;
	}

	else if(day > compareDate.getMonth()) {
		return false;
	}

	else {
		return false;
	}

}

void Date::resetDate() {

	month = 12;
	day = 30;
	year = 1950;
	return;

}

void Date::validate() {

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
		resetDate();
	}

	return;

}
