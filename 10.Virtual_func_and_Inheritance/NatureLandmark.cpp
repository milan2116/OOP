#include "NatureLandmark.h"

NatureLandmark::NatureLandmark(int lati, int longti, int alti, const char* desc, int mon) : Landmark(lati, longti, alti, desc), month(mon)
{
}

NatureLandmark::NatureLandmark() : Landmark(), month(0)
{
}

std::ostream& operator<<(std::ostream& os, const NatureLandmark& dt)
{
	os << (Landmark)dt << " " << dt.month;
	return os;
}
