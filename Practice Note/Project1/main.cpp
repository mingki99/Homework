#include <iostream>
#include <stdio.h>
#include <stdlib.h>

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

	iArr;


	return 0;
}

