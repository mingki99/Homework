#include <iostream>

using namespace std;

int main()
{
	float a;
	float b;
	float c;
	float d;
	float i;

	cout << "���� ������ �Է��Ͻÿ�" << endl;
	cin >> a;
	cout << "���� ������ �Է��Ͻÿ�" << endl;
	cin >> b;
	cout << "��ȸ ������ �Է��Ͻÿ�" << endl;
	cin >> c;
	cout << "���� ������ �Է��Ͻÿ�" << endl;
	cin >> d;

	if (a < b || c || d)
	{
		
		b = b / a ;
		c = c / a ;
		d = d / a ;
		a = a / a ;

		i = b + c + d + a ;

		i = i * 100;

		cout <<"������ ������� �� 4���� ���� :"<< '\n' << i / 4 << endl;
	}
	else if (b < a || c || d)
	{
		b = b / b;
		c = c / b;
		d = d / b;
		a = a / b;

		i = b + c + d + a;

		i = i * 100;

		
		cout << "������ ������� �� 4���� ���� :" << '\n' << i / 4 << endl;
	}
	else if (c < b || a || d)
	{
		b = b / c;
		c = c / c;
		d = d / c;
		a = a / c;

		i = b + c + d + a;

		i = i * 100;

		cout << "��ȸ�� ������� �� 4���� ���� :" << '\n' << i / 4 << endl;
	}
	else 
	{
		b = b / d;
		c = c / d;
		d = d / d;
		a = a / d;

		i = b + c + d + a;

		i = i * 100;

		cout << "������ ������� �� 4���� ���� :" << '\n' << i / 4 << endl;
	}
	return 0;
}
