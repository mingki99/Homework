#include <iostream>


using namespace std;

void add(int& score, int addscore)
{
	printf("%d���� �������Ƿ�\n", addscore);

	score = score + addscore;

}

void CharArray (char s[])
{
	printf("%d \n", sizeof(s));
}

int main()
{
	char s[15] = "HELLO world";

	printf("%s \n",s);			//"HELLO world"
	
	printf("%d \n",sizeof(s));	// 15 s[]�� �ε��� ��.

	CharArray(s);				// 8 = 64bit �ü���� ���� byte���� return

	printf("%d \n",sizeof(&s));	// 8 = 64bit �ü���� ���� byte���� return

	
	return 0;
}

