/* CSCI 261 Lab 8B: Calender Events
 *
 * Author: Krista Dunlap
 *
 * Testing Event Class
 */

#include <iostream>
#include "DateClass.cpp"
#include "EventClass.cpp"
using namespace std;

int main() {

	Event newEvent;

	cout << "The title of this event is currently " << newEvent.GetTitle() << ". ";
	cout << "The location of this event is currently " << newEvent.GetLocation() << ". ";
	cout << "The date for this event is currently " << newEvent.GetDate() << endl;

	newEvent.SetTitle("New Title");
	newEvent.SetLocation("Someplace New");

	Date changeDate(11,20,2017);
	newEvent.SetDate(changeDate);

	newEvent.PrintEvent();
	cout << endl;

	Date changeDate2(8,1,1876);

	Event anotherEvent("Colorado Becomes a State","United States",changeDate2);

	anotherEvent.PrintEvent();
	cout << endl;

	return 0;
}
