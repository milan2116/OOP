#include "Programmer.h"

Programmer::Programmer(const char* name, int intership, int salary, const char* programmingLanguage) : ITSpecialist(name, intership, salary)
{
	this->programmingLanguage = programmingLanguage;
}
