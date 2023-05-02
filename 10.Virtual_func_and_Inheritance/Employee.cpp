#include "Employee.h"

Employee::Employee(const char* firstN, const char* lastN) : User(firstN, lastN)
{
	std::ofstream oFile("Employee.txt", std::ios::app);
	oFile << firstN << " " << lastN << '\n';
	oFile.close();
}

void Employee::AddLandmark(const char* fileName, const Landmark& lm)
{
	std::ofstream oFile(fileName, std::ios::app);
	oFile << lm;
	oFile.close();
}
