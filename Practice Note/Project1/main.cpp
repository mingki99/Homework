#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

void SetHP(int* hp)
{
	*hp = 100;
}



int main()
{
	int HP = 1;
	SetHP(&HP);

	printf("%d\n", HP);

	int hp;

	// 타입의 불일치
	__int64* a;
	
	return 0;
}

