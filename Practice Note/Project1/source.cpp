#include <iostream>
#include <stdio.h>


using namespace std;

// �Լ�
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

// ��� �Լ�
// ������, ������ ����

// ������ ��������.

int Factorial_Re(int _iNum)
{
	if (1 == _iNum)
	{
		return 1;
	}

	return _iNum * Factorial_Re(_iNum - 1);
}


// �Ǻ���ġ ����
// 1 1 2 3 5 8 13 21 34 55...

int Fibonacci(int _iNum)
{
	// 1,2 ��°�� ���� 1�� 1�̱� ������ 
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

