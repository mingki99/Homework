#include <iostream>

using namespace std;

// ���� ������ �� �ڸ� ���� ���������� �Ǵ� Ƚ�� �� �Է��ؾ��Ѵ�.

// 101 �̸� 101 ������ Hansu() �� ���;��Ѵ�.

// 125
bool  Hansu(int a)
{	
	int b = a/10;

	int Gongcha = b%10 - a%10;

	int temp = a % 10;


	// 1, 2, 3, 4 ������� ���ڸ� �Ѱ� ����Ѵ� 4, 3 -> 3, 2 -> 

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

