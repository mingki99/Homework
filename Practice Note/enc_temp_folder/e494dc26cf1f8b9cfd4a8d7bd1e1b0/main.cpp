#include <stdio.h>
#include <stdlib.h>

#include <wchar.h>
#include <assert.h>


// �޸� ����
// 1. ����(stack)
// 2. ������
// 3. ��
// 4. ROM(�ڵ�)

// �Լ� �����ε� (���� �̸��� �Լ��� ������ �ִ�)

// �Լ��� �̸��� ���Ƶ� ���ڰ��� �ٸ��� ������
// �ϳ��� ��Ʈ, �÷���
void Test(int a)
{

}

void Test(float a)
{

}

// ���ڰ� ������ ������ ������ unsigned ��
unsigned int GetLength(const wchar_t* _pstr)
{
	// ���� ���� üũ�뵵
	int i = 0;

	while ('\0' != _pstr[i])
	{
		++i;
	}

	return i;
}

void StrCat(wchar_t* _pDest, unsigned int _iBufferSize, const wchar_t* _pSrc)
{
	// ���ȭ : �Լ� �ȿ� �Լ��� �ο��Ͽ� ��� (���ʿ��� �ڵ带 �����ش�)

	// �̾���� ���� ���ڿ� ���̰�, ������ ���� ������ �Ѿ���� ���
	int iDestLen = GetLength(_pDest);
	int iSrcLen = GetLength(_pSrc);

	// ����ó��
	if (_iBufferSize < iDestLen + iSrcLen + 1);	// null ���� �������� ��� + 1 �� ���ش�
	{
		int a = _iBufferSize; 
		assert(nullptr);
	}

	iDestLen;

	for (int i = 0; i < iSrcLen + 1; ++i)
	{
		_pDest[iDestLen + i] = _pSrc[i];
	}

}


int main()
{
	wchar_t szName[10] = L"Raimnd";

	int iLen = wcslen(szName);

	iLen = GetLength(szName);

	Test(10);
	Test(4.14f);

	// ���ڿ� �̾� ���̱�

	/*

	wchar_t szString[10] = L"abc";

	���ڿ��� ũ�⿡ ��ġ�� ���ڿ��� �Է½�
	wcscat_s(szString, 10, L"efghijklmnopqrstuvwxyz")
	*/

	wchar_t szString[100] = L"abc";

	wcscat_s(szString, 100, L"def");

	wchar_t szString1[100] = L"abc";

	StrCat(szString1, 100, L"def");

	// ���� �Լ� ��������

	// ������ �� ũ�� -1
	// �������� �� ũ�� 1
	// ���� ���� 0
	// ù ���ڰ� a �� �� �ɶ� ���� ���� �򰡵ȴ�
	// ���ڿ��� ũ���� �񱳴� �ƽ�Ű �ڵ�� �Ǻ��� �ȴ�.

	int iRet = wcscmp(L"abc", L"abd");


	return 0;
}

