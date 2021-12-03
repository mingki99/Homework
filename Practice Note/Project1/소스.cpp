#include <iostream>
#include <algorithm>

using namespace std;

int iCount ;

int iNumber;


int main(int argc, const char* argv[])
{

	cin >> iCount;

	int iarray[1000001];
	
	for (int i = 0; i <= iCount; i++)
	{
		cin >> iarray[i];
		
	}

	sort(iarray + 0, iarray + iCount);

	cout << iarray[0] << " " << iarray[iCount-1] << endl;

	return 0;
}

