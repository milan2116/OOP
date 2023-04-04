#include "User.h"
#include <iostream>
#include <cscapi.h>
#pragma warning(disable : 4996)

User::User() {
	this->username = nullptr;
	this->password = nullptr;
}

User::~User() {
	delete[] username;
	delete[] username;
}

User::User(char* user, char* pas) {
	this->username = new char[strlen(user) + 1];
	this->password = new char[strlen(pas) + 1];
	strcpy(this->username, user);
	strcpy(this->password, pas);
}

User::User(const User& other) {
	this->username = new char[strlen(other.username) + 1];
	this->password = new char[strlen(other.password) + 1];
	strcpy(this->username, other.username);
	strcpy(this->password, other.password);
}

User::User(User&& other) {
	this->username = other.username;
	this->password = other.password;
	other.username = nullptr;
	other.password = nullptr;
}

User& User::operator=(const User& other) {
	delete[] this->username;
	delete[] this->password;
	this->username = new char[strlen(other.username) + 1];
	this->password = new char[strlen(other.password) + 1];
	strcpy(this->username, other.username);
	strcpy(this->password, other.password);
}

void User::Print() {
	std::cout << this->username << " " << this->password << std::endl;
}
