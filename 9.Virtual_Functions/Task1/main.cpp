#include <iostream>

#include "Cat.h"
#include "Dog.h"

int main()
{
	Animal ponnie("Gosho", "pony");
	Dog doggie("Pesho");
	Cat kitty("Tosho");
	Animal* animals[] = { &ponnie, &doggie, &kitty };
	for (int i = 0; i < 3; i++)
	{
		animals[i]->talk();
	}
}