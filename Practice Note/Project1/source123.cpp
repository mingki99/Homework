#include <iostream>

using namespace std;

void Infut();

bool Program = true;

int main()
{
	int a;
	int b;


	while (Program)
	{


		cout << "ù��° ������ ����Ű �ϳ��� �����ּ���!" << endl;
		
		cin >> a;

		if (a == 10)
		{

			Program = false;

			continue; // �Ʒ����� �ڵ���� �����ϰ� ���οö󰣴�.
		}

		cout << "�ι�° ������ ����Ű �ϳ��� �����ּ���!" << endl;

		cin >> b;

		cout << a + b << endl;
	
	}
	cout << "10�� ���� ����˴ϴ�." << endl;
	
	return 0;
}
