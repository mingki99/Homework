#include <stdio.h>
#include <stdlib.h>

#include <wchar.h>
#include <assert.h>


// 메모리 영역
// 1. 스텍(stack)
// 2. 데이터
// 3. 힙
// 4. ROM(코드)

// 함수 오버로딩 (같은 이름의 함수가 여러개 있다)

// 함수의 이름은 같아도 인자값이 다르기 때문에
// 하나는 이트, 플롯을
void Test(int a)
{

}

void Test(float a)
{

}

tyoedef struct _tag;







// 글자가 음수인 이유가 없으니 unsigned 로
unsigned int GetLength(const wchar_t* _pstr)
{
	// 문자 개수 체크용도
	int i = 0;

	while ('\0' != _pstr[i])
	{
		++i;
	}

	return i;
}

void StrCat(wchar_t* _pDest, unsigned int _iBufferSize, const wchar_t* _pSrc)
{

	// 모듈화 : 함수 안에 함수를 인용하여 사용 (불필요한 코드를 없애준다)
	int iDestLen = GetLength(_pDest);
	int iSrcLen = GetLength(_pSrc);

	// 예외처리
	// 이어붙인 최종 문자열 길이가, 목적지 저장 공간을 넘어서려는 경우
	if (_iBufferSize < iDestLen + iSrcLen + 1)	// null 문자 공간까지 계산 + 1 을 해준다
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

	// 영어 대, 소문자 아니면 입력 안받게 하고 , 대 소문자 케이스 분류해서 해보장
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

	// 문자열 이어 붙이기
	wchar_t szString[100] = L"abc";

	wcscat_s(szString, 100, L"def");

	// 문자열 이어 붙이기
	// 제작한 함수
	wchar_t szString1[10] = L"abc";

	StrCat(szString1, 10, L"def"); 

	int iRet = wcscmp(L"abc", L"abd");

	iRet = StrCmp(L"abd", L"abc");

	return 0;
}

