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

	Factorial(10);

	return iValue;
}

// ��� �Լ�
// ������, ������ ����

// ������ ��������.


int main()
{
	int iValue = Factorial(4);
	iValue = Factorial(10);



	return 0;
}

