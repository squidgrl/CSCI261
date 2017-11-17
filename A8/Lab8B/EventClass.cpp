/* CSCI261 Lab8B: Event Class
 *
 * Description: Definition file for Date Class
 *
 * Author: Krista Dunlap
 *
 */

#include "EventClass.h"

Event::Event() {

	eventTitle = "Title";
	eventLocation = "Location";
	eventDate.setDate(12,30,1950);

}
