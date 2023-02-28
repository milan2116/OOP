#ifndef EVENT_H
#define EVENT_H
#include "time.h"

class Event {
	char title[256];
	char organizer[256];
	Time start_time;
	Time end_time;
public:
	Event();
	Event(char titl[256], char org[256], Time start, Time end);
	Time get_duration();
};
#endif 

