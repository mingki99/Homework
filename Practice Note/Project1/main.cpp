#include <iostream>

using namespace std;


int main()
{

	int count = 0;

	int N;

	int totalN;
	
	int MinorityCount = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{

		cin >> totalN;
		count = 0;
		if (totalN == 1)
			continue;


		if (totalN == 2|| totalN == 3|| totalN == 5|| totalN == 7)
		{
			MinorityCount++;
			continue;
		}

		for (int J = 1; J <= totalN; J++)
		{

			if (0 == totalN % J)
			{
				count++;
			}
		}

		if (count <= 2)
		{
			MinorityCount++;
		}

	}

	cout << MinorityCount << endl;

	return 0;
}
