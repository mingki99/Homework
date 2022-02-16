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

	

	return iValue;
}

// 재귀 함수
// 가독성, 구현의 용이

// 성능이 떨어진다.

int Factorial_Re(int _iNum)
{
	if (1 == _iNum)
	{
		return 1;
	}

	return _iNum * Factorial_Re(_iNum - 1);
}


// 피보나치 수열
// 1 1 2 3 5 8 13 21 34 55...

int Fibonacci(int _iNum)
{
	// 1,2 번째는 값이 1과 1이기 때문에 
	if (1 == _iNum || 2 == _iNum)
	{
		return 1;
	}

	for (int i = 0; i < _iNum - 2; ++i)
	{

	}
}



int main()
{
	int iValue = Factorial(4);
	iValue = Factorial(10);

	iValue = Factorial_Re(10);
	
	iValue = Fibonacci(10);

	return 0;
}

