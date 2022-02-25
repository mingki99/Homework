#include <iostream>
#include <stdio.h>
#include "func.h"
#include "common.h"

int g_i = 0;


// 정적변수
static int g_iStatic = 0;

// 외부변수


int Test()
{
	static int i = 0;	// 정적변수는 한번 컴파일 하였을때 한번만 값이 들어가고 다음부터는 값이 들어가지 않는다
						// 즉 i 가 한번만 0 으로 set 되고 다음 함수가 호출될때는 set 이 되지않는다.
	
	++g_i;
	++i;

	return i;
}

int main()
{
	g_iStatic = 100;
	g_iExtern = 500;

	Add(0, 0);

	Test();
	Test();
	Test();
	Test();
	Test();

	g_i = 0;
	printf("Test 함수 호출 횟수 : %d\n", g_i);



	// 포인터 변수
	// 주소를 저장하는 변수
	// 자료형 + * 변수명
	// 해당 포인터에게 전달된 주소를 해석하는 단위
	int i = 100;
	float F = 3.f;

	int* pInt = (int*)&F;

	// 주소로 접근 (정수표현 방식)
	// 이안에 저장되어있는 주소값으로 참조 하겠다는것이다 (주소로 들어가는것)
	i = *pInt;
	
	// 주소의 단위 (Byte)
	100;

	105;
	
	return 0;
}

