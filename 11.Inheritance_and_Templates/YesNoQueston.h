#ifndef _YESNOQUESTION_H
#define _YESNOQUESTION_H

#include "Question.h"

class YesNoQuestion : Question
{
	std::string question;
	std::string correctAnswer;
	std::string userAnswer;
	int points;

public:
	YesNoQuestion(const char* questio, const char* correctAnsw, int poi );
	void ask();
	int grade();
};

#endif 
