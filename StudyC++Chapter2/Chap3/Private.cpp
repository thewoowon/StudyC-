#include <stdio.h>

class Time
{
public:
	Time(int h,int m,int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	int GetHour()
	{
		return hour;
	}

	void SetHour(int h)
	{
		if (h>=0 && h<24)
		{
			hour = h;
		}
		else
		{
			hour = 0;
		}
	}

	int GetMin()
	{
		return min;
	}

	void SetMin(int m)
	{
		if (m>=0 && m < 61)
		{
			min = m;
		}
		else
		{
			min = 0;
		}
	}

	int GetSec()
	{
		return min;
	}

	void SetSec(int s)
	{
		if (s>=0 && s<61)
		{
			sec = s;
		}
		else
		{
			sec =30;
		}
	}

	void OutTime()
	{
		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
	}
	
private:
	int hour, min, sec;

};


int main()
{
	Time now(14, 2, 30);
	now.OutTime();

	now.SetHour(13);

	now.SetHour(now.GetHour());
	now.OutTime();

	now.SetMin(59);
	now.OutTime();

	now.SetSec(-1);
	now.OutTime();


	return 0;
}
