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
		printf("%s ��ü �����ڰ� �����Ǿ����ϴ�.\n", this->name);
	}
	~Human()
	{
		printf("%s ��ü�� �ı��Ǿ����ϴ�.\n", this->name);
		delete[] this->name;
	}

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", this->name, this->age);
	}


private:
	char* name;
	int age;
};

int main()
{
	Human man("���", 27);
	man.intro();

	Human *leo = new Human("���������� ��ī������", 47);
	leo->intro();
	delete leo;
}