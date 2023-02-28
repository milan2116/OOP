#include <iostream>
#include "time.h"
#include "event.h"

int Time::GetHour() {
	return hour;
}
void Time::SetHour(int newHour) {
	if (newHour < 0 || newHour >= 24) {
		throw std::exception("Invalid hour.");
	}
	hour = newHour;
}
int Time::GetMinute() {
	return minute;
}
void Time::SetMinute(int newMinute) {
	if (newMinute < 0 || newMinute >= 60) {
		throw std::exception("Ivalid minute.");
	}
	minute = newMinute;
}
int Time::GetSecond() {
	return second;
}
void Time::SetSecond(int newSecond) {
	if (newSecond < 0 || newSecond >= 60) {
		throw std::exception("Invalid second.");
	}
	second = newSecond;
}
Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
}
Time::Time(int hour, int minute, int second) {
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}
Time Time::get_diff(Time other_time) {
	int newHour = other_time.GetHour() - this->hour;
	int newMinute = other_time.GetMinute() - this->minute;
	int newSecond = other_time.GetSecond() - this->second;
	if (newSecond < 0) {
		newSecond += 60;
		newMinute--;
	}
	if (newMinute < 0) {
		newMinute += 60;
		newHour--;
	}
	Time newTime(newHour, newMinute, newSecond);
	return newTime;
};



int main()
{
	
}
