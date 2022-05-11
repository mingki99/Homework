#include <iostream>

using namespace std;
#include <string.h>


int main()
{
	string a;
	string b;
	cin >> a >> b;

	// �� ���� ���� �Ű��� ����
	string temp;

	// ���� �ڸ��ö󰡴� ����
	int tenth = 0;

	// ������ ũ�� ���� ���
	int asize = a.size() - 1;
	int bsize = b.size() - 1;

	// a,b size 2���� 0���� �۾����� �ݺ��� �ߴ�
	while (0 <= asize || 0 <= bsize)
	{
		// ������ �� �ӽ÷� ����
		int add = 0;

		// a,b size �����ڸ��� ���ų�, �ٸ� �� ó�����ִ� �İ� ���ǹ� 
		if (0 <= asize && 0 <= bsize)
		{
			add = (a[asize] - 48) + (b[bsize] - 48) + tenth;
		}
		else if (asize > bsize)
		{
			add = (a[asize] - 48) + tenth;
		}
		else if (asize < bsize)
		{
			add = (b[bsize] - 48) + tenth;
		}

		// ������ ���� 10���� ũ�ٸ� 10�� �ڸ� �ø��� �ؾ��Ѵ�.
		if (add >= 10)
		{
			tenth = add / 10;
			add %= 10;

			temp.push_back(add);
		}
		else
		{
			temp.push_back(add);
			tenth = 0;
		}
		
		--asize;
		--bsize;
	}
	
	// ù° �ڸ��� 10�� �ø�
	if (tenth == 1)
	{
		temp.push_back(tenth);
	}

	// string�� ���� �Ųٷ� ���
	for (int i = (temp.size()) - 1; i >= 0; --i)
	{
		int ch = temp [i];
		cout << ch;
	}
	

	return 0;
}