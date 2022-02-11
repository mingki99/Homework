#include <iostream>
#include <stdio.h>


using namespace std;

int Add(int ia, int ib)
{
	return ia + ib;
}

// 함수
int main()
{

	//scanf();

	int num1 = 3;
	int num2 = 3;
	int num3 = 3;
	int num4 = 3;
	int num5 = 3;

	printf("asd\n");

	int iData = Add(100, 200);

	// 반복문
	//for (/* 반복자 초기화 */; /*반복자 조건체크*/; /*반복자 변경*/)
	//{

	//}
	
	for (int i = 0; i < 4; ++i)
	{
		if (i % 2 == 1)
		{
			continue;
		}

		printf("Output tast\n"); // 콘솔이 \n 을 만나면 다음줄로 이동하라는 것으로 인식한다.

		// continue 를 만나게되면 밑에있는 구문들은 건너뛰고 바로 다음횟수로 넘어가진다.
		continue;
		

		break;
	}


	int i = 0;
	/*while (i < 4)
	{
		printf("oitput\n");

		++i;
	}*/


	return 0;
}


// 단축기
// 
// 지정한 구문 주석 처리		: Ctrl + k, c
// 지정한 구문 주석 해제		: Ctrl + k, u

