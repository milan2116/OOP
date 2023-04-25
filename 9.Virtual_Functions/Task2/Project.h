#ifndef _PROJECT_H
#define _PROJECT_H

#include <string>
class Project
{
	std::string name;
	int difficulty;
public:
	Project(const char* name, int difficulty) {
		this->name = name;
		this->difficulty = difficulty;
	}
	int GetDifficulty() {
		return difficulty;
	}
};

#endif

