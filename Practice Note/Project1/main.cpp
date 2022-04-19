#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;

	string a;

	cin >> a;

	int temp = 0;
	

	for (int i = 0; i <= count - 1; ++i)
	{
		temp += a[i] - 48;
	}

	cout << temp <<endl;
	

	
	
	return 0;
}

