#include <iostream>

using namespace std;

int main()
{
<<<<<<< HEAD
	int A;
	int B;
	int C;
	int total;
	int index;
	
	int x;

	int array[10] = {0};
	

	cin >> A;
	cin >> B;
	cin >> C;

	total = A * B * C;

	for (int i = 0; i < 10; i++)
	{
		if (total > 0)
		{
			index = total % 10;
			total = total / 10;

			
			
			
			for (x = 0; x < 10; x++)
			{
				if (index == x)
				{
					array[x] = array[x] + 1;
				}
			}
=======
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
>>>>>>> c6e68ddc14b35b83d1c4c85309f57dcc2eaf30ee
		}
	
<<<<<<< HEAD
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
=======
	cout << num << endl;
	cout << c << endl;
>>>>>>> c6e68ddc14b35b83d1c4c85309f57dcc2eaf30ee

	return 0;
}