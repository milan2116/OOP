#include "String.h"
#include <iostream>
#include <cstring>;

#pragma warning(disable : 4996)

String::String(const char* str) {
	strcpy(data, str);
}

String::String(const String& other) {
	strcpy(data, other.data);
}

String String::operator+(const String& other) {
	strcat(this->data, other.data);
	return *this;
}

String String::operator+(const char* str) {
	strcat(this->data, str);
	return *this;
}


String::String(String&& other) {
	data = other.data;
	other.data = nullptr;
}

char* String::operator[](int index) {
	char* ptr = data;
	ptr += index;
	return ptr;
}

void String::operator+=(const String& other) {
	strcat(this->data, other.data);
}

void String::operator+=(const char* str) {
	strcat(this->data, str);
}

bool String::operator==(const char* str) {
	if (strcmp(this->data, str) == 0) {
		return true;
	}
	return false;
}

bool String::operator==(const String& other) {
	if (strcmp(this->data, other.data) == 0) {
		return true;
	}
	return false;
}

std::ostream& operator<<(std::ostream& os, const String& str)
{
	os << str.data;
	return os;
}


std::istream& operator>>(std::istream& is, const String& str) {
	is.getline(str.data, 256);
	return is;
}

int String::Length() {
	return strlen(this->data);
}

bool String::Empty() {
	if (this->data[0] == '\0') {
		return true;
	};
	return false;
}

const char* String::c_str() {
	return this->data;
}
