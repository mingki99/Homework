#include <iostream>

using namespace std;

int iCount ;

int iNumber;

int iMax;

int iMin = 1000000;

int main()
{
	cin >> iCount;

	double iarray[1000000];
	
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
			iMin = iarray[i];
		}

		
		
		
	}

	cout << iMax << " " << iMin << endl;

	return 0;
}

