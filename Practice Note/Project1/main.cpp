#include <iostream>

using namespace std;



int main()
{

	int N;
	cin >> N;	

	int temp = N / 5;	// Greedy Algorithm

	int count = temp;

	while (1)
	{
		if (temp < 0)
		{
			cout << "-1" <<endl;
			break;
		}
		
		if ((N - (temp*5))%3 == 0)
		{
			count += (N - (temp*5)) / 3;
			cout << count << endl;
			break;
		}
		else
		{
			temp -= 1;
			count -= 1;
		}

	}
	return 0;
}