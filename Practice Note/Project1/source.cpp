#include <iostream>
#include <stdio.h>


using namespace std;

// ÇÔ¼ö
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





int main()
{
	int iValue = Factorial(4);
	iValue = Factorial(10);



	return 0;
}

