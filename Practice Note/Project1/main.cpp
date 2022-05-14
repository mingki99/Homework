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
		

		for (int j = 1; j < N[i]; j++)
		{
			if ()
			{
			}
		}

	}

	cout << count << endl;

	return 0;
}

