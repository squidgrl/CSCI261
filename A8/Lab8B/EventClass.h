/* CSCI261 Lab8B: Event Class
 *
 * Description: Declaration file for Date Class
 *
 * Author: Krista Dunlap
 *
 */

#pragma once
#include <string>
using namespace std;

class Event {

	public:
		Event();
		Event(int setMonth, int setDay, int setYear, int setTitle, int setLocation);
		string GetTitle();
		void SetTitle(string newTitle);
		string GetLocation();
		void SetLocation(string newLocation);
		string GetDate();
		void SetDate();
		void PrintEvent();

	private:
		string eventTitle;
		string eventLocation;
		Date eventDate;

};
