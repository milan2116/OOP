#ifndef _ORDINARYUSER_H
#define _ORDINARYUSER_H

#include "User.h"
#include <vector>

class OrdinaryUser : User 
{
	std::vector<Landmark> visitLocations;
public:
	OrdinaryUser(const char* firstN, const char* lastN);
	void AddVisited(const Landmark& lm);
};

#endif // !_ORDINARYUSER_H
