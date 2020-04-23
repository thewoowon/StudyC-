#include <stdio.h>
#include "Date.h"

void Date::SetDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

void Date::SetDateOUT()
{
	printf("올해 날짜는 %d년 %d월 %d일 입니다.", year, month, day);
}