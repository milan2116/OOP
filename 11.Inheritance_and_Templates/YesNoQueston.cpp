#include "YesNoQueston.h"

YesNoQuestion::YesNoQuestion(const char* questio, const char* correctAnsw, int poi) : question(questio), correctAnswer(correctAnsw), points(poi)
{

}

void YesNoQuestion::ask()
{
    std::cout << question << '\n';
    std::cin >> userAnswer;
}

int YesNoQuestion::grade()
{
    if (correctAnswer == userAnswer) {
        return points;
    }
    return 0;
}
