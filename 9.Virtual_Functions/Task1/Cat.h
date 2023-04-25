#ifndef _CAT_H
#define _CAT_H

#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(const char* name);
	void talk();
};

#endif

