#ifndef _SYSTEM_H
#define _SYSTEM_H

#include "PremiumUser.h"

class System
{
	std::vector<User> users;
	std::vector<PremiumUser> premiumUsers;
	System();
public:
	static System& getInstance();
	bool HasUser(const char* name, const char* pass);
	void AddUser(User user);
	void AddPremiumUser(PremiumUser premUser);
};


#endif // !1
