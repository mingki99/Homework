#include <iostream>


using namespace std;


int main()
{
	char s[1000000];
	cin >> s;

	char capital[26];

	int check[26] = {0};

	for (int i = 0; i < 26; i++)
	{
		capital[i] = 65+i;	// �빮�� �־��ֱ�
	}

	int count = 0;

	while (s[count] != '\0')
	{
		int a = (int)s[count];	// ����ȯ ������ ������

		if (a > 96)
		{
			++check[a - 97];
		}
		else
		{
			++check[a - 65];
		}

		count++;
	}
		

	int Output = 0;
	int temp = 0;

	bool mark = true;

	for (int i = 0; i < 26; i++)
	{	
		if (temp < check[i])	// int �迭�߿� ������ ���帹�� index ����.
		{
			temp = check[i];
			Output = i;
			mark = true;
		}
		else if (temp == check[i])	// ���� ������ false ����.
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