#include <iostream>

using namespace std;

int main()
{
	int a[9];
	int b;
	int num = 0;
	int c ;

	for (int i = 0; i <= 8; i++)
	{
		cin >> b;

		a[i] = b;


		if (num < a[i])
		{
			num = a[i];
			c = i+1;
		}
	}
	
	cout << num << endl;
	cout << c << endl;

	return 0;
}