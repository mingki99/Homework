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

	// 포인터

	printf("Test 함수 호출 횟수 : %d\n", g_i);

	
	
	return 0;
}

