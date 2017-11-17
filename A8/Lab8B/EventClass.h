/* CSCI261 Lab8B: Event Class
 *
 * Description: Declaration file for Date Class
 *
 * Author: Krista Dunlap
 *
 */

#include <string>
#pragma once

class Event {

	public:
		Event();

	private:
		string eventTitle;
		string eventLocation;
		Date eventDate;

};
