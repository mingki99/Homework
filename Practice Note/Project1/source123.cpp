#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
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
		}
	
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}