#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int c;
	cin >> c;
	
	if (c >= 1 || c <= 100)
	{
		int total;
		cin >> total;

		int a[100];

		int value = 0;

		for (int i = 0; i < c; i++)
		{
			a[i] = total % 10;
			total = total / 10;
			value = value + a[i];
		}


		cout << value << endl;
		
	}

	return 0;
}

