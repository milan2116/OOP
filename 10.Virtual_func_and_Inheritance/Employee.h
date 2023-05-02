#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include "User.h"

class Employee : User
{
public:
	Employee(const char* firstN, const char* lastN);
	void AddLandmark(const char* fileName, const Landmark& lm);
};

#endif // !1
