#ifndef _H_BLACKCHOCOLATE
#define _H_BLACKCHOCOLATE

#include "Chocolate.h"

class BlackChocolate : public virtual Chocolate<std::string>
{
	bool ValidateId();
public:
	BlackChocolate(std::string id, int con);
	BlackChocolate(std::string id);
};

#endif // !_H_CHOCOLATE
