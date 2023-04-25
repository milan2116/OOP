#include "Manager.h"

Manager::Manager(const char* name, int intership, int salary, int peopleManaging) : Worker(name, intership, salary)
{
	this->peopleManaging = peopleManaging;
}

void Manager::annual_raise() {

}
