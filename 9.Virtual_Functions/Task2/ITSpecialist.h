#ifndef _ITSPECIALIST_H
#define _ITSPECIALIST_H

#include "Worker.h"
#include "Project.h"

class ITSpecialist : public Worker{
	int size;
	int capacity;
	Project* projects;
protected:
	float GetAverageDifficulty();
	int GetNumberOfProjects();
public: 
	ITSpecialist(const char* name, int intership, int salary);
	~ITSpecialist();
	ITSpecialist(const ITSpecialist& other);
	ITSpecialist(ITSpecialist&& other);
	ITSpecialist& operator=(const ITSpecialist& other);
	ITSpecialist& operator=(ITSpecialist&& other);
	void AddProject(const char* name, int difficulty);
};


#endif 
