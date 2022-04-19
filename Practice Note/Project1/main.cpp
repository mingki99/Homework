#include <iostream>

using namespace std;

#define N 10000

bool arr[N];	// �����ѹ����� bool �迭

int SelfNumber(int a)
{
	int temp = a;

	while (1)
	{
		if (a == 0)
		{
			break;
		}

		temp += a%10;	// ���� �ڸ����� ���ܳ��� ���ϱ�
		a = a/10;	// �����ڸ� �ϳ����ֱ�	
	}

	return temp;	// �����ѹ� �����ڰ� �ִ� ����
}


int main()
{
	for (int i = 1; i <= N; ++i)
	{
		int index = SelfNumber(i);
		
		if (index <= N)	// �迭 ũ�⺸�� ���ڰ� ũ�� false
		{
			arr[index] = true;	// �����ѹ� true �ֱ�.
		}
	}

	for (int i = 1; i <= N; ++i)
	{
		if (!arr[i])	// �迭�� ���� false �϶��� ����
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}

