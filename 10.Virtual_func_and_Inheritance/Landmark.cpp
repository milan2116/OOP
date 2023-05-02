#include "Landmark.h"

std::string Landmark::GetData()
{
	std::string str = "";
	str += latitude;
	str += " ";
	str += longtitude;
	str += " ";
	str += altitude;
	str += " ";
	str += description;
	str += " ";
	return str;
}

Landmark::Landmark(int lati, int longti, int alti, const char* desc) : latitude(lati), longtitude(longti), altitude(alti), description(desc)
{
}

Landmark::Landmark() : Landmark(0, 0, 0, "")
{
}

std::ostream& operator<<(std::ostream& os, const Landmark& dt)
{
	os << dt.altitude << " " << dt.longtitude << " " << dt.latitude << " " << dt.description << "\n";
	return os;
}
