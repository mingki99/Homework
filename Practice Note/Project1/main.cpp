#include <iostream>
#include <vector>
//#include "func.h"

using namespace std;

// ������ ���� : TextRPG2

// ���� 1) ���ڿ� ���̸� ����ϴ� �Լ�
int StrLen(const char* str)
{
	// str ���ڿ��� ���̸� ��ȯ
	int count = 0;

	while (str[count] != '|0')
	{
		count++;
	}

	return 0;
}

char* StrCpy(char* dest, char* src)
{
	/*int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}

	dest[i] = '\0';
	return dest;*/

	char* ret = dest;

	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}

	*dest = '\0';

	return ret;

}

#pragma warning(disable : 4996)


int main()
{
	const int BUF_SIZE = 100;

	char a[BUF_SIZE] = "HEllo";
	char b[BUF_SIZE];

	/*int len = strlen(a);
	cout << len;*/

	 
	 strcpy(b,a);



	return 0;
}

