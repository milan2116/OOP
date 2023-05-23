#ifndef _H_MILKWITHRAISINS
#define _H_MILKWITHRAISINS

#include "MilkChocolate.h"
#include "ChocolateWithRaisins.h"

class MilkWithRaisins : public ChocolateWithRaisins<int>, public MilkChocolate
{
public:
	MilkWithRaisins(int id, int con);
};

#endif // !_H_CHOCOLATE

