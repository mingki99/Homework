#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

// ����Ÿ vs �迭

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};


// char ���ڸ� �޴� �Ű������� �ڵ����� �����ͷ� �ٲ��
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

