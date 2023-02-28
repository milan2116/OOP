#ifndef TIME_H
#define TIME_H

class Time {
	int hour;
	int minute;
	int second;
public:
	int GetHour();
	void SetHour(int newHour);
	int GetMinute();
	void SetMinute(int newMinute);
	int GetSecond();
	void SetSecond(int newSecond);
	Time();
	Time(int hour, int minute, int second);
	Time get_diff(Time other_time);
	int ConvertToSeconds();
};

#endif
