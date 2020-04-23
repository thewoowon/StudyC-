#include <stdio.h>

class Simple
{
public:
	Simple(int avalue) : value(avalue)
	{

	}
	void OutValue()
	{
		printf("value = %d\n", value);
	}
	
private:
	int value;
};


int main()
{
	Simple A(1), B(2);
	A.OutValue();
	B.OutValue();
}