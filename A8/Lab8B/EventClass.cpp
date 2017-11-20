/* CSCI261 Lab8B: Event Class
 *
 * Description: Definition file for Date Class
 *
 * Author: Krista Dunlap
 *
 */

#include "EventClass.h"
#include <string>
using namespace std;

Event::Event() {

	eventTitle = "Title";
	eventLocation = "Location";
	eventDate.SetDate(12,30,1950);

}

Event::Event(int setMonth, int setDay, int setYear, int setTitle, int setLocation) {

	eventDate.SetDate(setMonth,setDay,setYear);
	eventTitle = setTitle;
	eventLocation = setLocation;

}

string Event::GetTitle() {

	return eventTitle;
}

void Event::SetTitle(string newTitle) {

	eventTitle = newTitle;
	return;

}

string Event::GetLocation() {

	return eventLocation;

}

void Event::SetLocation(string newLocation) {

	eventLocation = newLocation;
	return;

}

string Event::GetDate() {

	string theDate;

	theDate = to_string(eventDate.GetMonth()) + to_string(eventDate.GetDay()) + to_string(eventDate.GetYear());

	return theDate;

}

void Event::PrintEvent() {

	cout << GetDate() << ": " << GetTitle() << " (" << GetLocation() << ").";

	return;
}
