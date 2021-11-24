
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
	cout << "Upgrade 기본 수치를 입력하세요 : ";
	

	//강화 확률 구한다.
	

	while (true)
	{
		cin >> iUpgrade;
		
		float	fPercent = rand() % 10000 / 100.f;

	//강화 확률 : 업그레이드가 0~3 : 100% 성공 , 4~6 : 40% 7~9 : 10%
	// 10~13 : 1% , 14 ~ 15 : 0.1 %
	cout << "Upfrade : " << iUpgrade << endl;
	cout << "Percent : " << fPercent << endl;

	if (iUpgrade <= 3)
		cout << "강화 성공" << endl;
	else if (4 <= iUpgrade && iUpgrade <=6)
	{
		if (fPercent < 40.f)
			cout << "강화 성공" << endl;
		else
			cout << "강화 실패" << endl;
	}
	else if (7 <= iUpgrade && iUpgrade <= 9)
	{
		if (fPercent < 10.f)
			cout << "강화 성공" << endl;
		else
			cout << "강화 실패" << endl;
	}
	else if (10 <= iUpgrade && iUpgrade <= 13)
	{
		if (fPercent < 1.f)
			cout << "강화 성공" << endl;
		else
			cout << "강화 실패" << endl;
	}
	else if (14 <= iUpgrade && iUpgrade <= 15)
	{
		if (fPercent < 0.1f)
			cout << "강화 성공" << endl;
		else
			cout << "강화 실패" << endl;
	}
	}

	return 0;
}




