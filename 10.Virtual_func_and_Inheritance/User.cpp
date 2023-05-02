#include "User.h"

User::User(const char* firstN, const char* lastN) : firstName(firstN), LastName(lastN)
{
}

std::ostream& operator<<(std::ostream& os, const User& dt)
{
	os << dt.firstName << " " << dt.LastName << "\n";
	return os;
}
