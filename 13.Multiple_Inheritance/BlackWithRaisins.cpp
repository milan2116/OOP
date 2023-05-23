#include "BlackWithRaisins.h"

BlackWithRaisins::BlackWithRaisins(std::string id, int con) : ChocolateWithRaisins(id, con), BlackChocolate(id, con), Chocolate<std::string>(id, con)
{
	if (!(id[0] == 'S')) {
		throw std::exception("Wrong id!");
	}
}
