#include "User.h"

int User::counter = 0;

bool User::ComparePasswords(const char* pass1, const char* pass2)
{
	return strcmp(pass1, pass2) == 0;
}

void User::CryptPassword()
{
	for (int i = 0; i < password.length(); i++)
	{
		if ((password[i] >= 'a' && password[i] < 'z') || (password[i] >= 'A' && password[i] < 'Z')) {
			password[i]++;
		}
		else if (password[i] == 'z') {
			password[i] = 'a';
		}
		else if (password[i] == 'Z') {
			password[i] = 'A';
		}
		else if (password[i] > '0' && password[i] <= '9') {
			password[i]--;
		}
		else if (password[i] == '0') {
			password[i] = '?';
		}
	}
}

User::User(const char* name, const char* pass) : id(counter)
{
	username = name;
	password = pass;
	CryptPassword();
	counter++;
}

bool User::CompareUser(const User& other)
{
	return username == other.username && password == other.password;
}
