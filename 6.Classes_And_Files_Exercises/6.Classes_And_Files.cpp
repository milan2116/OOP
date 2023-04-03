#include <iostream>
#include "String.h"

int main()
{
	String str1("abc");
	String str2("abc");
	String str3(str1);
	str3 = str1 + str2 + "skdhg" + "str2" + str2;
	std::cout << str3;
}
