#include <stdio.h>

class Date;
class Time
{
	friend class Date;

public:
	Time(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}
	
private:
	int hour, min, sec;
};
class Date
{
	
public:
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	void OutToday(Time& t)
	{
		printf("���� ��¥�� %d�� %d�� %d���̰� �ð��� %d:%d:%d�Դϴ�.\n", year, month, day, t.hour, t.min, t.sec);
	}

	
private:
	int year, month, day;
};


int main()
{
	Time t(15, 15, 15);
	Date d(20, 20, 20);
	d.OutToday(t);

}