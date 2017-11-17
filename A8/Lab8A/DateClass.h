/* CSCI261 Lab8A: Date Class
 *
 * Description: Declaration file for Date Class
 *
 * Author: Krista Dunlap
 *
 */

#pragma once

class Date {
	
	public:
	Date();
	Date(int setMonth, int setDay, int setYear);
	int getMonth();
	void setMonth(int setMonth);
	int getDay();
	void setDay(int setDay);
	int getYear();
	void setYear(int setYear);
	void printDate();
		void setDate(int setMonth, int setDay, int setYear);
		bool earlierThan(Date compareDate);

	private:
		int month;
		int day;
		int year;
		void resetDate();
		void validate();

};
