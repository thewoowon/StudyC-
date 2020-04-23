#include <stdio.h>
#include <string.h>

class Human
{
public:
	Human(const char* aname,int aage)
	{
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
	}

	Human(const Human& other)
	{
		pname = new char[strlen(other.pname) + 1];
		strcpy(pname, other.pname);
		age = other.age;
	}

	~Human()
	{
		delete[] pname;
	}
	void intro()
	{
		printf("�̸� : %s, ���� : %d\n", pname, age);
	}

private:
	char* pname;
	int age;
};

void printHuman(Human who)
{
	who.intro();
}


int main()
{
	Human Kang("�̼���", 56);
	Human boy = Kang; //assign

	//boy.intro();
	printHuman(boy);

}