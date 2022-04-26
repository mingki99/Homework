#include <iostream>

using namespace std;

// 1 입력 : 노트북 판매 개수와 상관없이 == 임대료, 재산세, 보험료, 급여 == A만원 고정비용
// 2 입력 : 재료비와 인건비 == B만원
// 3 입력 : 노트북 가격 == C만원

// C의정수가 B보다 작으면 손익분기점이 상실된다


int main()
{
	int A;
	int B;
	int C;

	cin >> A;
	cin >> B;
	cin >> C;

	if (C <= B)
	{	
		cout << -1 <<endl;
	}
	else
	{
		int temp = C - B;

		for (int i = 1; C < A; ++i)
		{
			C = temp * i;
			B = i;
		}

		cout << B+1 << endl;

	}

	
	return 0;
}