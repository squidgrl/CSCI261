/* CSCI261 Lab8B: Event Class
 *
 * Description: Declaration file for Event Class
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
		Event(string setTitle, string setLocation, Date newDate);
		string GetTitle();
		void SetTitle(string newTitle);
		string GetLocation();
		void SetLocation(string newLocation);
		string GetDate();
		void SetDate(Date newDate);
		void PrintEvent();

	private:
		string eventTitle;
		string eventLocation;
		Date eventDate;

};
