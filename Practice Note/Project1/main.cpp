#include <iostream>
#include <stdio.h>
#include <stdlib.h>

// int �Լ��� return ���̴� �ȵǾ� void �� ��ȯ

void Test(int* a)	// �ּ� ����
{
	*a = 500;		// �ּ� ���� �Ͽ� 500 �� �־������.
}

int main()
{
	// ������ ����
	// �ڷ��� ������
	int* pInt = nullptr;

	// �ּҸ� ����
	char* pChar = nullptr;
	short* pShort = nullptr;

	// ���� ������ ������ ũ��� 8 ����Ʈ��.
	// �ü���� 64 ��Ʈ �̱⶧����.

	int iSize = sizeof(pInt);

	int i = 0;
	pInt = &i;

	pInt += 1;

	// pInt �� int* ���� �̱� ������, ����Ű�� ���� int �� �ؼ��Ѵ�.
	// ���� �ּҰ��� 1 �����ϴ� �ǹ̴� ���� int ��ġ�� �����ϱ� ���ؼ� sizeof(int) ������ �����ϰ� �ȴ�.

	// �����Ϳ� �迭
	// �迭�� Ư¡
	// 1. �޸𸮰� �������� �����̴�.
	// 2. �迭�� �̸��� �迭�� ���� �ּ��̴�.

	int iArr[10] = {};

	// int ������ ����
	*(iArr + 0) = 10; // iArr[0] = 10;
	*(iArr + 1) = 10; // iArr[1] = 10;

	// ������ ���� Ȯ�� ����
	// ���� 1.
	short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* pI = (int*)sArr;					// �̰� �Ѱ� �ǹ̰� ������?

	int iData = *((short*)(pI + 2));		// ��¥�� ���⼭ (short*) ���ִµ�?

	printf("1�� ���� ���� : %d\n", iData);	// 2 �Ͽõ�? 


	// ���� 2.
	char cArr[2] = { 1, 1 };

	short* ps = (short*)cArr;

	iData = *ps;							// short ���� ���� 2��° 

	printf("2�� ���� ���� : %d\n", iData);	// 2 ���õ�

	int a = 100;

	Test(&a);		// ���� a �� �ּ� �� ���� 

	printf("��� : %d\n", a);
	
	scanf_s("%d", &a);	// scanf_S �� �Լ��̱⿡ �ܼ�â���κ��� �Է� �� ���� �о�ͼ� ���� �������� �ּҿ� ������ �Ͽ��� �־��ְ� ���� �Լ��� ����Ǹ� ���� a ������ �ٲ�� �ִ°��̴�


	return 0;
}

