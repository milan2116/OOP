#ifndef _H_CHOCOLATEWITHRAISINS
#define _H_CHOCOLATEWITHRAISINS

#include "Chocolate.h"

template <typename T>
class ChocolateWithRaisins : public virtual Chocolate<T>
{
public:
	ChocolateWithRaisins(T id, int con);
	ChocolateWithRaisins(T id);
};

#endif // !_H_CHOCOLATE
