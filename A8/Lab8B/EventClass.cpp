/* CSCI261 Lab8B: Event Class
 *
 * Description: Definition file for Event Class
 *
 * Author: Krista Dunlap
 *
 */

#include "EventClass.h"
#include <string>
using namespace std;

Event::Event() {

	eventTitle = "Bjarne Stroustrup Born";
	eventLocation = "Aarhus, Denmark";
	eventDate.SetDate(12,30,1950);

}

Event::Event(string setTitle, string setLocation, Date newDate) {

	eventTitle = setTitle;
	eventLocation = setLocation;
	eventDate.SetDate(newDate.GetMonth(),newDate.GetDay(),newDate.GetYear());


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

	theDate = to_string(eventDate.GetMonth()) + "/" + to_string(eventDate.GetDay()) + "/" + to_string(eventDate.GetYear());

	return theDate;

}

void Event::SetDate(Date newDate) {

	eventDate.SetDate(newDate.GetMonth(),newDate.GetDay(),newDate.GetYear());

}

void Event::PrintEvent() {

	cout << GetDate() << ": " << GetTitle() << " (" << GetLocation() << ").";

	return;
}
