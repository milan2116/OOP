#ifndef _MULTIPLECHOICE_H
#define _MULTIPLECHOICE_H

#include "Question.h"

const int MAX_ANSWERS = 32;

class MultipleChoice : Question
{
	std::string question;
	std::string correctAnswers[32];
	int sizeOfCorrectAnswers;
	std::string possibleAnswers[32];
	int sizeOfPossibleAnswers;
	bool userAnswers[32];
	int pointsPerQuestion;

public:
	MultipleChoice(const char* questio, std::string correctAnsw[32], int sizeCorrect, std::string possibleAnsw[32], int sizePossible, int points);
	void ask();
	int grade();
};

#endif 
