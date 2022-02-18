#include <iostream>
#include <stdio.h>


// 사용자 정의 자료형
// 내가 직접 자료형을 만들수있다.
// 자료형 = int, float 같은 자료형

typedef struct _tagMyST
{
	int a;		// 4 바이트
	float f;	// 4 바이트
}MYST;			// 8 바이트

typedef struct _tagbig
{
	MYST K;		// 구조체 안에 또 구조체를 만들수있다.
	int i;
	char c;
}BIG;

typedef int INT;

typedef struct NewStruct // c 스타일: typedef 는 통째로 이름을 새로 만들어줬다. 
{
	int a;
	short s;
} NEWST;				// 실재로 이름을 만들었다.





int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6 };

	// 구조체
	MYST t = {100, 3.14f}; // 배열과 초기화 하는법이
	// 1번째 int 형, 2번째 flaot 형 초기화		// 8 바이트

	t.a = 10;
	t.f = 10.2312f;

	int iSize = sizeof(MYST);

	NEWST a;

	INT b;

	return 0;
}

