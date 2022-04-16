#include <iostream>

using namespace std;



int main()
{

	int a[10] = {};
	int b[42] = {};

	int count = 0;

	for (int i = 0; i <= 9; ++i)
	{
		cin >> a[i];

		b[(a[i]%42)] = 1;
		
	}


	for (int i = 0; i <= count; ++i)
	{
		if (1 == b[i])
		{
			count++;
		}
	}

	printf ("%d",count);



	return 0;
}