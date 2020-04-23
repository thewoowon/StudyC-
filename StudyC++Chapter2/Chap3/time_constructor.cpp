#include <stdio.h>

class Time
{
public:
	Time(int hour, int min, int sec)
	{
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}
	Time(int hour, int min)
	{
		this->hour = hour;
		this->min = min;
		this->sec = 0;
	}
	Time(int abssec)
	{
		this->hour = abssec/3600;
		this->min = (abssec/60)%60;
		this->sec = abssec%60;
	}
	
	void OutTime()
	{
		printf("현재 시간은 %2d:%2d:%2d입니다.\n", this->hour, this->min, this->sec);
	}

private:
	int hour, min, sec;
};

int main()
{
	Time now = Time(16, 57, 30);
	now.OutTime();
	
	Time as = Time(16, 57);
	as.OutTime();

	Time dd = Time(44000);
	dd.OutTime();
}