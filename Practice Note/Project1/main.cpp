#include <iostream>

using namespace std;

#define NJ = "nj"


int main()
{
	string s;
	cin >> s;
	
	if (s.length() > 100)
	{
		return 0;
	}

	int count = 0;

	// �ƹ����� C �ϰ� �� c��� ���� d�� d��� ���� �� �� ����
	// char Croatia [8] = { 'c=', 'c-', 'dz=','d-', 'lj', 'nj', 's=' , 'z='};


	for (int i = 0; i < s.length(); i++)
	{

		switch (s[i])
		{
		case 'c':
			if (s[i + 1] == '=' || s[i + 1] == '-')
			{
				i += 1;
				++count;
				break;
			}

			++count; // �ظ� ����Ʈ : c�� ������ if�� ���������� �ٷ� ���� case������ ���̷�Ʈ�� �������� 
			break;
		case 'd':
			if (s[i + 1] == '-')
			{
				i += 1;
				++count;
				break;
			}
			else if (s[i + 1] == 'z' && s[i + 2] == '=')
			{
				i += 2;
				++count;
				break;
			}
			++count;
			break;


		case 'l':
			if (s[i + 1] == 'j')
			{
				i += 1;
				++count;
				break;
			}
			++count;
			break;
		case 'n':
			if (s[i + 1] == 'j')
			{
				i += 1;
				++count;
				break;
			}

			++count;	
			break;

		case 's':
			if (s[i + 1] == '=')
			{
				i += 1;
				++count;
				break;
			}
			++count;
			break;

		case 'z':
			if (s[i + 1] == '=')
			{
				i += 1;
				++count;
				break;
			}
			++count;
			break;

		case '-':	// Ư������ ����ó���� ���ص� �������� ���ش�..�ǿܴ�
			break;

		case'=':
			break;

		default:	// �׿� ���ĺ�

			count++;
			break;
		}

	}





	cout << count << endl;





	return 0;
}