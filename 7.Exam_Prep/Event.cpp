#include "Event.h"
#include <iostream>
#include <cscapi.h>
#pragma warning(disable : 4996)

Event::Event(char* desc, char* dat, char* hou) {
	strcpy(this->description, desc);
	strcpy(this->date, dat);
	strcpy(this->hour, hou);
}

void Event::Print() {
	std::cout << this->description << this->date << this->hour;
}
