#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

// 포인타 vs 배열

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};


// char 인자를 받는 매개변수는 자동으로 포인터로 바뀐다
void Test(char a[])
{
	a[0] = 'x';
}


int main()
{
	const char* test1 = "Hello World";

	char test2[] = "Hello World";

	char mag [] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	return 0;
}

