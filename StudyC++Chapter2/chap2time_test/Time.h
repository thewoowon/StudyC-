#pragma once
class Time
{
public:
	void SetTime(int h, int m, int s);
	void OutTime();
	
private:
	int hour, min, sec;
};