#include <iostream>

using namespace std;


int main()
{

	int count = 0;

	int totalN;

	int N[100];

	cin >> totalN;
	if (totalN >= 100)
		return 0;


	for (int i = 0; i < totalN; ++i)
	{
		

		cin >> N[i];

		if (N[i] >= 1000)
			return 0;
		

		if ( N[i] == 2|| N[i] == 3|| N[i] == 5 || N[i] == 7)
		{
			count += 1;
		}
		else if (1 != N[i] && 0 != (N[i] % 2) && 0 != (N[i] %3) && 0 != (N[i] % 5) && 0 != (N[i] % 7))
		{
			count += 1;
		}


	}

	cout << count << endl;

	return 0;
}

