#include <iostream>

using namespace std;

// 양의 정수의 각 자리 마다 등차수열이 되는 횟수 를 입력해야한다.

// 101 이면 101 이하의 Hansu() 가 나와야한다.

// 125
bool  Hansu(int a)
{	
	int b = a/10;

	int Gongcha = b%10 - a%10;

	int temp = a % 10;


	// 1, 2, 3, 4 순서대로 인자를 넘겨 줘야한다 4, 3 -> 3, 2 -> 

	while (1)
	{
		
		
		a = a / 10;

		int temp2 = a % 10;

		if (a == 0)
		{
			break;
		}


		if (Gongcha == temp2 - temp)
		{
			
			temp = temp2;
		}
		else
		{
			return false;
		}
	
	}

	return true;


}


int main()
{
	int a;

	cin >> a;

	int hansu = 0;

	for (int i = 1; i <= a; ++i)
	{
		if (Hansu(i))
		{
			hansu++;
		}
	}
	
	

	printf("%d", hansu);
	
	
	return 0;
}

