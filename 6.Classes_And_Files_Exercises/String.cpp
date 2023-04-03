#include "String.h"
#include <iostream>
#include <cstring>

#pragma warning(disable : 4996)

String::String(const char* str) {
	data = new char[strlen(str) + 1];
	strcpy(data, str);
}

String::String(const String& other) {
	data = new char[strlen(other.data) + 1];
	strcpy(data, other.data);
}

String& String::operator=(const String& other) {
	if (this != &other) {
		delete[] data;
		data = new char[strlen(other.data) + 1];
		strcpy(this->data, other.data);
	}
	return *this;
}
String& String::operator=(const char* str) {
	delete[] data;
	data = new char[strlen(str) + 1];
	strcpy(this->data, str);
	return *this;
}

String::~String() {
	delete[] data;
}

String String::operator+(const String& other) {
	
	char* newData = new char[strlen(this->data) + strlen(other.data) + 1];
	strcpy(newData, this->data);
	strcat(newData, other.data);
	String result(newData);
	delete[] newData;
	return result;
}

String String::operator+(const char* str) {
	char* newData = new char[strlen(this->data) + strlen(str) + 1];
	strcpy(newData, this->data);
	strcat(newData, str);
	String result(newData);
	delete[] newData;
	return result;
}

String operator+(const char* str1, const String& str2) {
	char* newaData = new char[strlen(str1) + strlen(str2.data) + 1];
	strcpy(newaData, str1);
	strcat(newaData, str2.data);
	String result(newaData);
	delete[] newaData;
	return result;
}


String::String(String&& other) {
	data = other.data;
	other.data = nullptr;
}

char String::operator[](int index) {
	char* ptr = data;
	ptr += index;
	return *ptr;
}

void String::operator+=(const String& other) {
	char* newData = new char[strlen(this->data) + strlen(other.data) + 1];
	strcpy(newData, this->data);
	strcat(newData, other.data);
	delete[] this->data;
	this->data = newData;
}

void String::operator+=(const char* str) {
	char* newData = new char[strlen(this->data) + strlen(str) + 1];
	strcpy(newData, this->data);
	strcat(newData, str);
	delete[] this->data;
	this->data = newData;
}

bool String::operator==(const char* str) {
	return strcmp(this->data, str) == 0;
}

bool String::operator==(const String& other) {
	return strcmp(this->data, other.data) == 0;
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
