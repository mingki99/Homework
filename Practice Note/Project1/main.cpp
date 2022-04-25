#include <iostream>

#include <string>

using namespace std;

int main(void)
{
	char s[1000000];

	// fgets(s, 1000000, stdin);

	cin.getline(s,1000000);

	// cin.getline(s,1000000,'\n');

	// scanf_s("%[^\n]s",s,1000000);

	int count = 1;

	int clength = 0;

	if (s[clength] == 32)
	{
		count = 0;
		
	}

	while (s[clength] != '\0')
	{
		if (s[clength] == 32)
		{
			count++;
		}

		clength++;
	}

	if (s[clength-1] == 32)
	{
		count--;
	}
	
	cout << count << endl;
	
	

	return 0;
}