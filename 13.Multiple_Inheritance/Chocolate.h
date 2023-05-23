#ifndef _H_CHOCOLATE
#define _H_CHOCOLATE

#include <string>

template <typename T>
class Chocolate
{
	int content;
protected:
	T identificator;
public:
	Chocolate(T id, int con);
	Chocolate(int con);
	Chocolate();
};

#endif // !_H_CHOCOLATE


