#include <iostream>

struct Time {
	int hour;
	int minute;
	int second;
	Time get_diff(Time other_time) {
		int newHours = other_time.hour - this->hour;
		int newMinute = other_time.minute - this->minute;
		int newSecond = other_time.second - this->second;
		if (newSecond < 0) {
			newSecond += 60;
			newMinute--;
		}
		if (newMinute < 0) {
			newMinute += 60;
			newHours--;
		}
		Time newTime;
		newTime.hour = newHours;
		newTime.minute = newMinute;
		newTime.second = newSecond;
		return newTime;
	};
	int ConvertToSeconds() {
		return this->hour * 3600 + this->minute * 60 + this->second;
	}
}; 

struct Event {
	char title[256];
	char organizer[256];
	Time start_time;
	Time end_time;
	Time get_duration() {
		return start_time.get_diff(end_time);
	};
};

int main()
{
	int n;
	std::cin >> n;
	int secondsSum = 0;
	int inputSecond;
	int inputMinute;
	int inputHours;
	for (int i = 0; i < n; i++)
	{
		std::cin >> inputHours;
		std::cin >> inputMinute;
		std::cin >> inputSecond;
		Time inputTime;
		inputTime.hour = inputHours;
		inputTime.minute = inputMinute;
		inputTime.second = inputSecond;
		secondsSum += inputTime.ConvertToSeconds();
	}
	std::cout << secondsSum;
	return 0;
}