#include <iostream>
#include <stdio.h>


// ����� ���� �ڷ���
// ���� ���� �ڷ����� ������ִ�.
// �ڷ��� = int, float ���� �ڷ���

typedef struct _tagMyST
{
	int a;		// 4 ����Ʈ
	float f;	// 4 ����Ʈ
}MYST;			// 8 ����Ʈ

typedef struct _tagbig
{
	MYST K;		// ����ü �ȿ� �� ����ü�� ������ִ�.
	int i;
	char c;
}BIG;

typedef int INT;

typedef struct NewStruct // c ��Ÿ��: typedef �� ��°�� �̸��� ���� ��������. 
{
	int a;
	short s;
} NEWST;				// ����� �̸��� �������.





int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6 };

	// ����ü
	MYST t = {100, 3.14f}; // �迭�� �ʱ�ȭ �ϴ¹���
	// 1��° int ��, 2��° flaot �� �ʱ�ȭ		// 8 ����Ʈ

	t.a = 10;
	t.f = 10.2312f;

	int iSize = sizeof(MYST);

	NEWST a;

	INT b;

	return 0;
}

