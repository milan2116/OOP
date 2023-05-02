#ifndef _HISTORYLANDMARK_H
#define _HISTORYLANDMARK_H

#include "Landmark.h"

class HistoryLandmark : Landmark
{
	int eventYear;
public:
	HistoryLandmark(int lati, int longti, int alti, const char* desc, int year);
	HistoryLandmark();
	friend std::ostream& operator<<(std::ostream& os, const HistoryLandmark& dt);
};

#endif // !_HISTORYLANDMARK_H
