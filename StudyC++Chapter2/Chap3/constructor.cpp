#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	Human(const char *name, int age) //이게 생성자 함수형인데 클래스랑 이름이 같다.
	{
		strcpy(this->name, name);
		this->age = age;
	}
	
	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	Human kim = Human("김상형", 29); // 후자는 생성자
	kim.intro();
	return 0;
}
