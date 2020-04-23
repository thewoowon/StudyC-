#include <stdio.h>

class Human
{
public:
	char name[12];
	int age;

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	// Human kim = { "김상형",29 };
	// kim.intro();

	Human arFriend[10] = {
		{"권지용", 33},
	    {"제니", 22},
	    {"박건일",35}
	};
	for (int i = 0; i < 10; i++)
	{
		Human* pFriend;
		pFriend = &arFriend[i];
		pFriend->intro();
	}


}


