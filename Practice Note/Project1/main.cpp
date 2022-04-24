#include <iostream>
#include <string>


using namespace std;


int main()
{
	string s;

	char capital[26];
	char smallletter[26];

	int check[26] = {};

	for (int i = 0; i < 26; i++)
	{
		capital[i] = 65+i;
		smallletter[i] = 97+i;
	}

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == capital[j] || s[i] == smallletter[j])
			{
				check[j] += 1;
				break;
			}
		}
		
	}

	
	int Output = 0;
	int temp = 0;

	bool mark = true;

	for (int i = 0; i < 26; i++)
	{	
		if (temp < check[i])
		{
			temp = check[i];
			Output = i;
			mark = true;
		}
		else if (temp == check[i])
		{
			mark = false;
		}
	}

	if (mark)
	{
		cout << capital[Output] << endl;
	}
	else
	{
		cout << "?" << endl;
	}

	
	

	return 0;
}