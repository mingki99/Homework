#include <stdio.h>
#include <stdlib.h>

void Output(const int* pI)
{
	int i = *pI;

	// ������ �ٲ�� ���� �����͸� �ٲپ��

	int* pInt = (int*)pI;
	*pInt = 1000;
};


int main()
{
	// 1. const
	const int i = 100;

	// const �� ������
	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;


	// ===========
	// const ������
	// ===========
	const int* pConstInt = &a;
	// *pConstInt = 100;
	pConstInt = &i;				// ���� ���� �ٲܼ�������
	// *pConstInt = 100;		// �����ʹ� ����̱⿡ �ٲ���� ����.


	int b = 0;
	pConstInt = &b;

	// ===========
	// ������ const
	// ===========
	int* const pIntConst = &a;

	*pIntConst = 400;
	//pIntConst = &b;

	// �ʱ�ȭ �� ����Ų ��� ����Ŵ, ����Ű�� ������ ���� �� �� ����
	const int* const pConstTintconst = nullptr;
	

	{
		int a = 0;
		const int* pInt = &a;

		a = 100;
	}


	//
	a = 100;

	// ����Ű
	// �Լ� ��ȣ�ȿ�
	// Ctrl + Shift + Space
	// ������ ���δ�.

	Output(&a);

	return 0;
}

