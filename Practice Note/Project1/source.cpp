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

	int iPrev1 = 1;
	int iPrev2 = 1;
	int iValue = 0;

	for (int i = 0; i < _iNum - 2; ++i)
	{
		iValue = iPrev1 + iPrev2;
		iPrev1 = iPrev2;
		iPrev2 = iValue;
	}

	return iValue;
}


int i = 1;

int Fibonacci_Re(int _iNum)
{
	if (1 == _iNum || 2 == _iNum)
	{
		return 1;
	}

	return Fibonacci_Re(_iNum - 1) + Fibonacci_Re(_iNum - 2);

	i = i + 1;
}



int main()
{
	

	int iValue = Factorial(4);
	iValue = Factorial(10);
	iValue = Factorial_Re(10);

	iValue = Fibonacci(25);
	iValue = Fibonacci_Re(7);

	// �迭
	// �޸𸮰� ������
	int iArray[10] = {}; // �ƹ��͵� ���� ������ ���� Null = 0 ���� ���ִ�.

	iArray[4] = 10;



	return 0;
}

