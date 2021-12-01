#include <iostream>

using namespace std;

int iCount = 5;

int iNumber;

int iMax;

int iMin;

int main()
{
	cin >> iCount;

	int iarray[10000];
	
	for (int i = 0; i <= iCount; i++)
	{
		cin >> iNumber;

		iarray[i] = iNumber;

		if (iMax < iarray[i])
		{
			iMax = iarray[i];
		}

		if (iMin > iarray[i])
		{

		}

	}



	return 0;
}

