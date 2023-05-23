#include "MilkWithRaisins.h"

MilkWithRaisins::MilkWithRaisins(int id, int con) : ChocolateWithRaisins(id, con), MilkChocolate(id, con) , Chocolate<int>(id, con)
{
	int copy = identificator;
	int last1, last2;
	last2 = copy % 10;
	copy /= 10;
	last1 = copy % 10;
	copy /= 10;
	while (copy != 0) {
		last2 = last1;
		last1 = copy % 10;
		copy /= 10;
	}
	if (!(last1 == 4 && last2 == 5)) {
		throw std::exception("Wrong id!");
	}
}
