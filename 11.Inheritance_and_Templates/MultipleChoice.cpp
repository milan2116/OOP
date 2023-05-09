#include "MultipleChoice.h"

MultipleChoice::MultipleChoice(const char* questio, std::string correctAnsw[32], int sizeCorrect, std::string possibleAnswers[32], int sizePossible, )
{
	question = questio;
	for (int i = 0; i < sizeCorrect; i++)
	{
		correctAnswers[i] = correctAnsw[i];
	}
	sizeOfCorrectAnswers = sizeCorrect;
	for (int i = 0; i < sizePossible; i++)
	{
		possibleAnswers[i] = possibleAnsw[i];
	}
}
