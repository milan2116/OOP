#ifndef _H_BLACKWITHRAISINS
#define _H_BLACKWITHRAISINS

#include "BlackChocolate.h"
#include "ChocolateWithRaisins.h"

class BlackWithRaisins : public ChocolateWithRaisins<std::string>, public BlackChocolate
{
public:
	BlackWithRaisins(std::string id, int con);
};

#endif // !_H_CHOCOLATE

