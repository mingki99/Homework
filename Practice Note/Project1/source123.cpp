#include <iostream>

using namespace std;

int main()
{
	float a;
	float b;
	float c;
	float d;
	float i;

	cout << "수학 점수를 입력하시오" << endl;
	cin >> a;
	cout << "과학 점수를 입력하시오" << endl;
	cin >> b;
	cout << "사회 점수를 입력하시오" << endl;
	cin >> c;
	cout << "영어 점수를 입력하시오" << endl;
	cin >> d;

	if (a < b || c || d)
	{
		
		b = b / a ;
		c = c / a ;
		d = d / a ;
		a = a / a ;

		i = b + c + d + a ;

		i = i * 100;

		cout <<"수학을 평균으로 한 4개의 과목값 :"<< '\n' << i / 4 << endl;
	}
	else if (b < a || c || d)
	{
		b = b / b;
		c = c / b;
		d = d / b;
		a = a / b;

		i = b + c + d + a;

		i = i * 100;

		
		cout << "과학을 평균으로 한 4개의 과목값 :" << '\n' << i / 4 << endl;
	}
	else if (c < b || a || d)
	{
		b = b / c;
		c = c / c;
		d = d / c;
		a = a / c;

		i = b + c + d + a;

		i = i * 100;

		cout << "사회을 평균으로 한 4개의 과목값 :" << '\n' << i / 4 << endl;
	}
	else 
	{
		b = b / d;
		c = c / d;
		d = d / d;
		a = a / d;

		i = b + c + d + a;

		i = i * 100;

		cout << "영어을 평균으로 한 4개의 과목값 :" << '\n' << i / 4 << endl;
	}
	return 0;
}
