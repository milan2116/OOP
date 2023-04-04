#ifndef EVENT_H
#define EVENT_H

class Event
{
	char description[101];
	char date[11];
	char hour[6];
public:
	Event(char* desc, char* dat, char* hou);
	void Print();
};

#endif 

