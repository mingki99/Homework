#include <stdio.h>
#include <stdlib.h>


// �޸� ����
// 1. ����(stack)
// 2. ������
// 3. ��
// 4. ROM(�ڵ�)




void Output(const int* pI)
{
	int i = *pI;
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

	// void
	// 1. ������ �ڷ����� ������ ����
	// 2. ��� Ÿ���� �����l �ּҵ� �� ���� ����
	// 3. ������ �Ұ���
	// 4. �ּҿ��� �Ұ���
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

	{
		// ����
		// char(1), wchar(2)

		char c = 'a';
		wchar_t wc = L'a';

		char szChar[10] = "abcdef";

		// ���� �Ÿ𸮿� ���ڿ� �� �ִ� �迭
		wchar_t szWChar[10] = L"abcdef";		// ���ڸ� �迭�� �Űܿ°�

		// ROM ����¸��޸� ���ڿ��� �ּҿ� ����
		// ���� ������ 
		const wchar_t* pChar = L"abcdef";		// ���ڿ��� �����ּҸ� ����Ű�� �ִ°�
		 

		const int* i = 14;


		szWChar[1] = 'z';
		// pChar[1] = 'z';

		short arrShort[10] = { 97, 98, 99, 100, 101, 102, };

		


	}








	return 0;
}

