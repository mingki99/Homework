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

// ���� 2)
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

char* StrCat(char* dest, char* src)
{
	/*int len = StrLen(dest);

	int i = 0;
	while (src[i] != '|0');
	{
		dest[len + 1] = src[i];
		++i;
	}
	

	dest[len + i] = '|0';

	return dest;*/

	char* ret = dest;
	while (*dest)
		++dest;

	while (*src)
	{
		*dest = ++ * src;
	}
	*dest = '|0';

	return ret;
}

int StrCamp(char* a, char* b)
{
	int i = 0;
	while (a[i] != '|0' || b[i] != '|0')
	{
		if (a[i] > b[i])
			return 1;
		if (a[i] < b[i])
			return -1;
		i++;
	}

	return 0;
}


void ReverseStr(char* str)
{
	int len = StrLen(str);

	for (int i = 0; i < len / 2; ++i)
	{
		int temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}

#pragma warning(disable : 4996)


int main()
{
	const int BUF_SIZE = 100;

	char a[BUF_SIZE] = "HEllo";
	char b[BUF_SIZE];

	/*int len = strlen(a);
	cout << len;*/

	

	 int value = StrCamp(a, b);

	 cout << value << endl;

	 ReverseStr(a);

	 cout << a << endl;



	return 0;
}

