#ifndef _WORKER_H
#define _WORKER_H

#pragma warning(disable: 4996)

#include <string>
#include <cstring>

enum class QATYPE { automation, manualTester };
class Worker {
	std::string name;
	int internship;
	int salary;
public:
	Worker(const char* name, int intership,int salary);
	virtual void annual_raise();
};

#endif 
