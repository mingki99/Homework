#include <iostream>

using namespace std;

int main()
{

	//점수 별 클래스
	int a ;

	cin >> a;
	
	switch (a/10)
	{
	case 10:
	case 9:
		cout << "A";
		break;
	case 8:
		cout << "B";
		break;
	case 7:
		cout << "C";
		break;
	case 6:
		cout << "F";
		break;
	default:
		cout << "D";
	
	
	
	}
	
	
}