#ifndef _NATURELANDMARK_H
#define _NATURELANDMARK_H

#include "Landmark.h"

class NatureLandmark : Landmark
{
	int month;
public:
	NatureLandmark(int lati, int longti, int alti, const char* desc, int mon);
	NatureLandmark();
	friend std::ostream& operator<<(std::ostream& os, const NatureLandmark& dt);

};

#endif // !_NATURELANDMARK_H
