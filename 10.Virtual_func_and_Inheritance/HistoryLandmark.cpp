#include "HistoryLandmark.h"

HistoryLandmark::HistoryLandmark(int lati, int longti, int alti, const char* desc, int year) : Landmark(lati, longti, alti, desc), eventYear(year)
{
}

HistoryLandmark::HistoryLandmark() : Landmark(), eventYear(0)
{
}

std::ostream& operator<<(std::ostream& os, const HistoryLandmark& dt)
{
	os << (Landmark)dt << " " << dt.eventYear;
	return os;
}
