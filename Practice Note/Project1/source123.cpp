#include <iostream>

using namespace std;

/*한달 간 고정으로 지출되는 고정 비용을 A
		물건 하나를 만들 때 들어가는 가변 비용을 B
		물건의 가격을 C
		라고 하였을때,
.
		A, B, C를 입력받으면 손익분기점을 구하는 프로그램을 구하시오. (손익분기점이 존재하지 않으면 - 1을 출력한다)*/
int main()
{

	int a;
	int b;
	int c;

	int d;

	cin >> a;
	cin >> b;
	cin >> c;


	if (b < c)
	{
		for (d = 0; d * c < a + b * d; d++)
		{
		}
		cout << "손익분기점을 넘기는 판매 갯수는 " << d + 1 << "입니다" << endl;
	}
	else(c < b);
	{
		cout << "인건비도 안나오겠네;" << " -1" << endl;
	}
	
	
}