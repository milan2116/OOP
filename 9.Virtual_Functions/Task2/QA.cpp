#include "QA.h"

QA::QA(const char* name, int intership, int salary, const char* type) : ITSpecialist(name, intership, salary)
{
	if (strcmp(type, "manual") == 0) {
		this->type = QATYPE::manualTester;
	}
	else if (strcmp(type, "automation") == 0) {
		this->type = QATYPE::automation;
	}
	else {
		throw std::exception("invalid type");
	}
}
