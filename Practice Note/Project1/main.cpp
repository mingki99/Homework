#include <iostream>


using namespace std;

void add(int& score, int addscore)
{
	printf("%d점을 더했으므로\n", addscore);

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
	
	printf("%d \n",sizeof(s));	// 15 s[]의 인덱스 값.

	CharArray(s);				// 8 = 64bit 운영체제에 따른 byte수가 return

	printf("%d \n",sizeof(&s));	// 8 = 64bit 운영체제에 따른 byte수가 return

	
	return 0;
}

