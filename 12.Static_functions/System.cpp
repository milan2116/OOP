#include "System.h"

System::System()
{
}

System& System::getInstance()
{
	static System instance;
	return instance;
}

bool System::HasUser(const char* name, const char* pass)
{
	User user = User(name, pass);
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i].CompareUser(user)) {
			return true;
		}
	}
	return false;
}

void System::AddUser(User user)
{
	users.push_back(user);
}

void System::AddPremiumUser(PremiumUser premUser)
{
	premiumUsers.push_back(premUser);
}
