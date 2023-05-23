#include "BlackChocolate.h"

bool BlackChocolate::ValidateId() {
	char ch;
	for (int i = 0; i < identificator.length(); i++)
	{
		ch = identificator[i];
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

BlackChocolate::BlackChocolate(std::string id, int con) : Chocolate(con)
{
	if (!ValidateId()) {
		throw std::exception("Wrong id!");
	}
	identificator = id;
}

BlackChocolate::BlackChocolate(std::string id) : Chocolate(80)
{
	if (!ValidateId()) {
		throw std::exception("Wrong id!");
	}
	identificator = id;
}

