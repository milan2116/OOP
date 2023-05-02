#include "OrdinaryUser.h"

OrdinaryUser::OrdinaryUser(const char* firstN, const char* lastN) : User(firstN, lastN)
{
	std::ofstream oFile("OridinaryUser.txt", std::ios::app);
	oFile << firstN << " " << lastN << '\n';
	oFile.close();
}

void OrdinaryUser::AddVisited(const Landmark& lm)
{
	visitLocations.push_back(lm);
}
