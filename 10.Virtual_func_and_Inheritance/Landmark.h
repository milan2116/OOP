#ifndef _LANDMARK_H
#define _LANDMARK_H

#include <string>
#include <iostream>

class Landmark
{
	int latitude; // широчина
	int longtitude; // дължина
	int altitude;// височина
	std::string description;
protected:
	std::string GetData();
public:
	Landmark(int lati, int longti, int alti, const char* desc);
	Landmark();
	friend std::ostream& operator<<(std::ostream& os, const Landmark& dt);
};

#endif // !_LANDMARK_H
