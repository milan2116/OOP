#ifndef _MANAGER_H
#define _MANAGER_H

#include "Worker.h"
class Manager : public Worker {
	int peopleManaging;
public:
	Manager(const char* name, int intership, int salary, int peopleManaging);
	void annual_raise();
};

#endif

