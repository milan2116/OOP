#ifndef _USER_H
#define _USER_H

#include <string>

class User
{
	const int id;
	std::string username;
	std::string password;
	void CryptPassword();
public:
	static int counter;
	static bool ComparePasswords(const char* pass1, const char* pass2);
	User(const char* name, const char* pass);
	bool CompareUser(const User& other);
};


#endif // !1
