
#include <iostream>
#include<time.h>

using namespace std;
int main()
{
	srand((unsigned int)time(0));

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << (rand() % 101 + 100) << endl;
	cout << (rand() % 10000 / 100.f) << endl;

	int iUpgrade = 0;
	cout << "Upgrade �⺻ ��ġ�� �Է��ϼ��� : ";
	

	//��ȭ Ȯ�� ���Ѵ�.
	

	while (true)
	{
		cin >> iUpgrade;
		
		float	fPercent = rand() % 10000 / 100.f;

	//��ȭ Ȯ�� : ���׷��̵尡 0~3 : 100% ���� , 4~6 : 40% 7~9 : 10%
	// 10~13 : 1% , 14 ~ 15 : 0.1 %
	cout << "Upfrade : " << iUpgrade << endl;
	cout << "Percent : " << fPercent << endl;

	if (iUpgrade <= 3)
		cout << "��ȭ ����" << endl;
	else if (4 <= iUpgrade && iUpgrade <=6)
	{
		if (fPercent < 40.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}
	else if (7 <= iUpgrade && iUpgrade <= 9)
	{
		if (fPercent < 10.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}
	else if (10 <= iUpgrade && iUpgrade <= 13)
	{
		if (fPercent < 1.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}
	else if (14 <= iUpgrade && iUpgrade <= 15)
	{
		if (fPercent < 0.1f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}
	}

	return 0;
}




