#include <iostream>
//STL
#include <string>
#include <algorithm>

using namespace std;

int main()
{
<<<<<<< HEAD
	string Mother = "My Famliy";
	string Sister = "Member";
	string Me = "Three People";

	string B1;
	string B2;
	string B3;

	string b1;
	string b2;
	string b3;

	for (auto a : Mother)
	{
		B1.push_back(toupper(a));
	}
	for (auto a : Sister)
	{
		B2.push_back(toupper(a));
	}
	for (auto a : Me)
	{
		B3.push_back(toupper(a));
	}

	cout << B1 << endl;
	cout << B2 << endl;
	cout << B3 << endl;
	cout <<B1+B2+ B3 << endl;
	
	for (auto A : Mother)
	{
		b1.push_back(tolower(A));
	}
	for (auto A : Sister)
	{
		b2.push_back(tolower(A));
	}
	for (auto A : Me)
	{
		b3.push_back(tolower(A));
	}

	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;
	cout << b1+b2+b3 << endl;


	return 0;
}
=======
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
>>>>>>> 315ff2b00c640f0c026d7e27364fd8058476f552
