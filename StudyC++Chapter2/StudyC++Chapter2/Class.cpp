#include <stdio.h>

class Human
{
public:
	char name[12];
	int age;

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	// Human kim = { "�����",29 };
	// kim.intro();

	Human arFriend[10] = {
		{"������", 33},
	    {"����", 22},
	    {"�ڰ���",35}
	};
	for (int i = 0; i < 10; i++)
	{
		Human* pFriend;
		pFriend = &arFriend[i];
		pFriend->intro();
	}


}


