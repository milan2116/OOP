#include <iostream>
#include <fstream>
#include "User.h"

const int MAX_SIZE = 256;

int main()
{
	std::ifstream iFile;
	iFile.open("Users.txt", std::ios::binary|std::ios::in);
	int count = 0;
	User users[256];
	if (!iFile) {
		std::cerr << "File couldn’t be opened!\n";
		return 1;
	}

	while (true) {
		User user;
		iFile.read((char*)&user, sizeof(user));

		if (iFile.eof()) {
			break;
		}
		users[count] = user;
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		users[i].Print();
	}
	return 0;
}