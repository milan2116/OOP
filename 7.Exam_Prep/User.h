#ifndef EVENT_H
#define EVENT_H

class User
{
	char* username;
	char* password;
public:
	User();
	User(char* user, char* pas);
	User(const User& other);
	User(User&& other);
	~User();
	User& operator=(const User& other);
	void Print();
};

#endif 


