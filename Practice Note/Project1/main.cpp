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

tyoedef struct _tag;







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
	int iDestLen = GetLength(_pDest);
	int iSrcLen = GetLength(_pSrc);

	// ����ó��
	// �̾���� ���� ���ڿ� ���̰�, ������ ���� ������ �Ѿ���� ���
	if (_iBufferSize < iDestLen + iSrcLen + 1)	// null ���� �������� ��� + 1 �� ���ش�
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

int StrCmp(const wchar_t* _LeftStr, const wchar_t* _RightStr)
{

	// ���� ��, �ҹ��� �ƴϸ� �Է� �ȹް� �ϰ� , �� �ҹ��� ���̽� �з��ؼ� �غ���
	int leftLen = GetLength(_LeftStr);
	int rightLen = GetLength(_RightStr);

	int iLoop = rightLen;
	

	if (leftLen < rightLen)
	{
		iLoop = rightLen;
		return -1;
	}
	else if(leftLen > rightLen)
	{
		iLoop = leftLen;
		return 1;
	}
	

	for (int i = 0; i < iLoop; ++i)
	{
		if (_LeftStr[i] < _RightStr[i])
		{
			return -1;
		}
		else if (_LeftStr[i] > _RightStr[i])
		{
			return 1;
		}

	}

	return 0;

}


int main()
{
	wchar_t szName[10] = L"Raimnd";

	int iLen = wcslen(szName);

	iLen = GetLength(szName);

	Test(10);
	Test(4.14f);

	// ���ڿ� �̾� ���̱�
	wchar_t szString[100] = L"abc";

	wcscat_s(szString, 100, L"def");

	// ���ڿ� �̾� ���̱�
	// ������ �Լ�
	wchar_t szString1[10] = L"abc";

	StrCat(szString1, 10, L"def"); 

	int iRet = wcscmp(L"abc", L"abd");

	iRet = StrCmp(L"abd", L"abc");

	return 0;
}

