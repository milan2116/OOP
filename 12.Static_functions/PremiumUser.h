#ifndef _PREMIUMUSER_H
#define _PREMIUMUSER_H

#include "User.h"
#include <vector>

class PremiumUser : public User
{
	std::string description;
	std::vector<std::string> dates;
public:
	PremiumUser(const char* name, const char* pass, const char* desc);
	void AddDate(const char* date);
};


#endif // !1
