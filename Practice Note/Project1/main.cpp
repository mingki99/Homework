#include <iostream>

using namespace std;



int Factorial(int n)
{
	if (1 >= n)
	{
		return n;
	}

	cout << n << endl;
	return n * Factorial(n - 1);
}


void SetPlayerinfo(int hp, int mp, int attack, int guildld = 0, int casteld = 0)
{
	
}

int main()
{
	SetPlayerinfo(20, 30, 50);

	int result = Factorial(5);

	cout << result << endl;

	return 0;
}

