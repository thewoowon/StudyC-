#include <stdio.h>

class Celsius
{
public:
	double tem;
	Celsius()
	{

	}
	Celsius(double atem) : tem(atem)
	{

	}
	operator Celsius();
	void Outtem()
	{
		printf("È­¾¾ = %f\n", tem);
	}

private:

};

class farlehite
{
public:
	
private:

};

farlehite::farlehite()
{
}

farlehite::~farlehite()
{
}

Celsius::Celsius()
{
}

Celsius::~Celsius()
{
}