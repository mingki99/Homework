#include <iostream>

using namespace std;

int iNumber;

int ia, ib, ic, id;

int iCount;

int main()
{
	cin >> iNumber;

	if (0 <= iNumber <= 99)
	{

		ia = iNumber / 10;
		ib = iNumber % 10;

		while (iNumber != id)
		{
			ic = ia + ib;
			ic = ic % 10;
			id = ib * 10 + ic;
			ib = id % 10;
			ia = id / 10;

			iCount++;
		}

		cout << iCount << endl;

	}


	return 0;
}

