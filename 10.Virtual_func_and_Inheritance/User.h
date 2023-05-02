#ifndef _USER_H
#define _USER_H

#include <string>
#include <iostream>
#include <fstream>
#include "Landmark.h"
class User
{
	std::string firstName;
	std::string LastName;
public:
	User(const char* firstN, const char* lastN);
	friend std::ostream& operator<<(std::ostream& os, const User& dt);
};

#endif 
