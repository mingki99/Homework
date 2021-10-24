#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* num = new int[n];
	int min;
	int max;

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	min = num[0];
	max = num[0];

	for(int i = 0; i < n; i++)
	{	
		if (min > num[i])
		{
			min = num[i];
		}
		else if (max < num[i])
		{
			max = num[i];
		}
	}
	
	cout << "최소 값 :" << min << endl;
	cout << "최대 값 :" << max << endl;

	delete[] num;

	return 0;
	
}