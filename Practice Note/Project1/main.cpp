#include <iostream>
#include <stdio.h>
#include <stdlib.h>

// int 함수는 return 없이는 안되어 void 로 변환

void Test(int* a)	// 주소 참조
{
	*a = 500;		// 주소 접근 하여 500 을 넣어버린다.
}

int main()
{
	// 포인터 변수
	// 자료형 변수명
	int* pInt = nullptr;

	// 주소를 저장
	char* pChar = nullptr;
	short* pShort = nullptr;

	// 현재 포인터 변수의 크기는 8 바이트다.
	// 운영체제가 64 비트 이기때문에.

	int iSize = sizeof(pInt);

	int i = 0;
	pInt = &i;

	pInt += 1;

	// pInt 는 int* 변수 이기 때문에, 가리키는 곳을 int 로 해석한다.
	// 따라서 주소값을 1 증가하는 의미는 다음 int 위치로 접근하기 위해서 sizeof(int) 단위로 증가하게 된다.

	// 포인터와 배열
	// 배열의 특징
	// 1. 메모리가 연속적인 구조이다.
	// 2. 배열의 이름은 배열의 시작 주소이다.

	int iArr[10] = {};

	// int 단위로 접근
	*(iArr + 0) = 10; // iArr[0] = 10;
	*(iArr + 1) = 10; // iArr[1] = 10;

	// 포인터 이해 확인 문제
	// 문제 1.
	short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* pI = (int*)sArr;					// 이거 한게 의미가 있을까?

	int iData = *((short*)(pI + 2));		// 어짜피 여기서 (short*) 해주는데?

	printf("1번 문제 정답 : %d\n", iData);	// 2 니올듯? 


	// 문제 2.
	char cArr[2] = { 1, 1 };

	short* ps = (short*)cArr;

	iData = *ps;							// short 형이 들어가서 2번째 

	printf("2번 문제 정답 : %d\n", iData);	// 2 나올듯

	int a = 100;

	Test(&a);		// 변수 a 의 주소 값 전달 

	printf("출력 : %d\n", a);
	
	scanf_s("%d", &a);	// scanf_S 도 함수이기에 콘솔창으로부터 입력 된 값을 읽어와서 내가 전달해준 주소에 접근을 하여서 넣어주고 나니 함수가 종료되면 정말 a 변수가 바뀌어 있는겄이다


	return 0;
}

