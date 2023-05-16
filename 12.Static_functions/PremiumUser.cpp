#include "PremiumUser.h"

PremiumUser::PremiumUser(const char* name, const char* pass, const char* desc) : User(name, pass)
{
	description = desc;
}

void PremiumUser::AddDate(const char* date)
{
	dates.push_back(date);
}
