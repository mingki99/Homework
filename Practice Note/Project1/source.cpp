#include <iostream>
#include <stdio.h>


using namespace std;

// 함수
// Factorial
// 

int Factorial(int _iNumb)
{
	int iValue = 1;
	
	for (int j = 0; j < _iNumb - 1; ++j)
	{
		iValue *= (j + 2);
	}

	Factorial(10);

	return iValue;
}

// 재귀 함수
// 가독성, 구현의 용이

// 성능이 떨어진다.


int main()
{
	int iValue = Factorial(4);
	iValue = Factorial(10);



	return 0;
}

