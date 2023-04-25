#ifndef _DOG_H
#define _DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(const char* name);
	void talk();
};

#endif

