#ifndef _H_MILKCHOCOLATE
#define _H_MILKCHOCOLATE

#include <string>
#include "Chocolate.h"

class MilkChocolate : public virtual Chocolate<int>
{
public:
	MilkChocolate(int id, int con);
	MilkChocolate(int id);
};

#endif // !_H_CHOCOLATE
