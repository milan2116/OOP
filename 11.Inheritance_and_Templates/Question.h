#ifndef _QUESTION_H
#define _QUESTION_H

#include <string>
#include <iostream>
class Question
{
public:
	virtual void ask();
	virtual int grade();
};

#endif // !_QUESTION_H
