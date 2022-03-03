#include <stdio.h>
#include <stdlib.h>

void Output(const int* pI)
{
	int i = *pI;
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

	// void
	// 1. 원본의 자료형을 정하지 않음
	// 2. 어떠한 타입의 변수릐 주소든 다 저장 가능
	// 3. 역참조 불가능
	// 4. 주소연산 불가능
	void* pVoid = nullptr;
	float* pFloat = nullptr;

	{
		int a = 0;
		float f = 0.f;
		double d = 0.;
		long long ll = 0;

		pVoid = &a;
		pVoid = &f;
		pVoid = &d;
		pVoid = &ll;

		// *pVoid;
		// pVoid + 1;
		
	}



	return 0;
}

