#include <iostream>

using namespace std;

int main()
{

	char* s1 = new char[80];
	
	int a = 0;
	int b = 0;

	int total = 0;

	cin >> s1;
	
	while (s1[0] == 'O' && 'X')
	{
		for (int i = 0; i < 79; i++)
		{
			switch (s1[i])
			{
			case 'O':

				a = a++;
				total = a + total;
				break;

			case'X':

				a = 0;
				break;
			}
		}

		cout << total;
	}
	delete[] s1;

	return 0;
}




/*for (int i = 0; i < 79; i++)
	{
		if (s1[i] == 'O')
		{
			a = a++;
			total = a + total;

		}
		else if (s1[i] == 'X')
		{
			a = 0;
		}
	}*/