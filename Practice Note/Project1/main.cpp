#include <iostream>

using namespace std;

#define N 10000

bool arr[N];	// 셀프넘버담을 bool 배열

int SelfNumber(int a)
{
	int temp = a;

	while (1)
	{
		if (a == 0)
		{
			break;
		}

		temp += a%10;	// 일의 자릿수만 남겨놓고 더하기
		a = a/10;	// 십의자리 하나빼주기	
	}

	return temp;	// 셀프넘버 생성자가 있는 숫자
}


int main()
{
	for (int i = 1; i <= N; ++i)
	{
		int index = SelfNumber(i);
		
		if (index <= N)	// 배열 크기보다 숫자가 크면 false
		{
			arr[index] = true;	// 셀프넘버 true 주기.
		}
	}

	for (int i = 1; i <= N; ++i)
	{
		if (!arr[i])	// 배열의 값이 false 일때만 실행
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}

