#include <iostream>

using namespace std;


int main()
{
	char s[16];
	cin >> s;

	int arr[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

	int Sconds = 0;

	for (int i = 0; s[i] != '\0'; ++i)
	{	
		Sconds += arr[s[i] - 65];
	}

	cout << Sconds << endl;





	return 0;
}