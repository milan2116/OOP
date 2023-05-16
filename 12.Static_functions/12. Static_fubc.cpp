#include <iostream>

#include "System.h"

int main()
{
	User u1 = User("Pesho", "4i574hdkf");
	System s = System::getInstance();
	s.AddUser(u1);
	std::cout << s.HasUser("Pesho", "4i574hdkf");
	return 0;
}
