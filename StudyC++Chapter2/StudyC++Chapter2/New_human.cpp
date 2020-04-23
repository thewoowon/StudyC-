#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS

class Human
{
public:
	Human(const char* name, int age)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
		printf("%s 객체 생성자가 생성되었습니다.\n", this->name);
	}
	~Human()
	{
		printf("%s 객체가 파괴되었습니다.\n", this->name);
		delete[] this->name;
	}

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", this->name, this->age);
	}


private:
	char* name;
	int age;
};

int main()
{
	Human man("우원", 27);
	man.intro();

	Human *leo = new Human("레오나르도 디카프리오", 47);
	leo->intro();
	delete leo;
}