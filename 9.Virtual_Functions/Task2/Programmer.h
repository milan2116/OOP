#ifndef _PROGRAMMER_H
#define _PROGRAMMER_H

#include "ITSpecialist.h"
class Programmer : public ITSpecialist {
	std::string programmingLanguage;
public:
	Programmer(const char* name, int intership, int salary, const char* programmingLanguage);
	void annual_raise();
};


#endif
