#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <iostream>
#include <cstring>

#pragma warning(disable: 4996)


class Animal
{
	char name[1024];
	char type[1024];
public:
	Animal(const char* name,const char* type);
	virtual void talk();
};

#endif

