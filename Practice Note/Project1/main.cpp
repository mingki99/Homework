#include <stdio.h>
#include <stdlib.h>

void Output(const int* pI)
{
	int i = *pI;

	// 문법상 바뀔수 없는 데이터를 바꾸어보자

	int* pInt = (int*)pI;
	*pInt = 1000;
};


int main()
{
	// 1. const
	const int i = 100;

	// const 와 포인터
	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;


	// ===========
	// const 포인터
	// ===========
	const int* pConstInt = &a;
	// *pConstInt = 100;
	pConstInt = &i;				// 변수 값은 바꿀수있지만
	// *pConstInt = 100;		// 포인터는 상수이기에 바뀔수가 없다.


	int b = 0;
	pConstInt = &b;

	// ===========
	// 포인터 const
	// ===========
	int* const pIntConst = &a;

	*pIntConst = 400;
	//pIntConst = &b;

	// 초기화 시 가리킨 대상만 가리킴, 가리키는 원본을 수정 할 수 없음
	const int* const pConstTintconst = nullptr;
	

	{
		int a = 0;
		const int* pInt = &a;

		a = 100;
	}


	//
	a = 100;

	// 단축키
	// 함수 괄호안에
	// Ctrl + Shift + Space
	// 선언이 보인다.

	Output(&a);

	return 0;
}

