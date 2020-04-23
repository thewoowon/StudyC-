#include <stdio.h>
#include "Time.h"
#include "Date.h"

int main()
{
	Date d;
	d.SetDate(2020, 4, 21);
	d.SetDateOUT();
	printf("\n");
	printf("Size of Date = %d\n", sizeof(d));

	Time t;
	t.SetTime(16, 2, 30);
	t.OutTime();
	printf("\n");
	printf("Size of Date = %d\n", sizeof(t));

	return 0;
}




