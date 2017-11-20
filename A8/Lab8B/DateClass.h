/* CSCI261 Lab8B: Date Class
 *
 * Description: Declaration file for Date Class
 *
 * Author: Krista Dunlap
 *
 */

#pragma once
#include <string>
using namespace std;

class Date {
	
	public:
		Date();
		Date(int setMonth, int setDay, int setYear);
		int GetMonth();
		void SetMonth(int setMonth);
		int GetDay();
		void SetDay(int setDay);
		int GetYear();
		void SetYear(int setYear);
		void PrintDate();
		string GetDate();
		void SetDate(int setMonth, int setDay, int setYear);
		bool EarlierThan(Date compareDate);

	private:
		int month;
		int day;
		int year;
		void ResetDate();
		void Validate();

};
