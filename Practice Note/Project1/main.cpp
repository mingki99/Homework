#include <iostream>


using namespace std;

template <class T>

T Square(T x)
{
	cout << x << " 의 제곱은";
	x = x * x;
	cout << x << " 입니다." << endl;
	
	return x;
}

//inline int Square(int x)
//{
//	
//	printf("%d 의 제곱은", x);
//	x = x * x;
//	printf("%d입니다\n", x);
//	return x;
//
//}
//
//inline double Square(double x)
//{
//
//	// print 실수 double 형 = %lf
//	printf("%1.2lf 의 제곱은", x);
//	x = x * x;
//	printf("%1.2lf입니다\n", x);
//	return x;
//}

int main()
{
	printf("정수를 입력하십시오. \n");
	int iinput = 0;

	cin >> iinput;

	Square(iinput);

	printf("소수를 입력하십시오.\n");

	double dinput = 0;

	cin >> dinput;

	Square(dinput);

	return 0;
}

