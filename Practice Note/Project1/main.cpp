#include <iostream>

using namespace std;




int main()
{
	// �ƽ�Ű�ڵ尡 ������� �迭
	int Arr[26];

	// ���� �ڸ����� ��ġ ����.
	int OutputArr[26];

	// �ߺ�üũ
	bool overlap[26];

	string s;

	// �� ��° ���� ������ ����
	int digit = 0;

	for (int i = 0; i <= 25; ++i)
	{
		Arr[i] = i + 97;	// �ƽ�Ű�ڵ�δ� �ҹ��� a = 97�̴�
		OutputArr[i] = -1;
		overlap[i] = true;

	}

	cin >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		for (int j = 0; j <= 25; ++j)
		{	
			if (overlap[j])	// �ߺ� üũ
			{
				if (Arr[j] == s[i])	// ������ �ƽ�Ű�ڵ� ��
				{
					OutputArr[j] = digit;	// �� ���� ����

					overlap[j] = false;	// ���� ������ false
				}
			}
		}

		digit ++;
	}
	
	for (int i = 0; i <= 25; ++i)
	{
		cout << OutputArr[i]<< " ";
	}

	
	return 0;
}

