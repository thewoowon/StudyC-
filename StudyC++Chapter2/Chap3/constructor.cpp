#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	Human(const char *name, int age) //�̰� ������ �Լ����ε� Ŭ������ �̸��� ����.
	{
		strcpy(this->name, name);
		this->age = age;
	}
	
	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	Human kim = Human("�����", 29); // ���ڴ� ������
	kim.intro();
	return 0;
}
