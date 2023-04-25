#include "Animal.h"

Animal::Animal(const char* name, const char* type) {
	strcpy(this->name, name);
	strcpy(this->type, type);
}

void Animal::talk()
{
	std::cout << "*Animal noises*" << '\n';
}
