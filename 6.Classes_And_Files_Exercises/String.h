#ifndef  STRING_H
#define STRING_H

#include <iostream>

class String {
private:
	char* data;
public:
	String(const char* str = "");
	String(const String& other);
	~String();
	String(String&& other);
	String operator+(const String& str2);
	String operator+(const char* str2);
	char* operator[](int index);
	void operator+=(const char* str);
	void operator+=(const String& other);
	bool operator==(const char* str);
	bool operator==(const String& other);
	friend std::istream& operator>>(std::istream& is, const String& str);
	friend std::ostream& operator<<(std::ostream& os, const String& str);
	int Length();
	bool Empty();
	const char* c_str();
};
#endif