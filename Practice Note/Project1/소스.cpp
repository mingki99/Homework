#include <iostream>

using namespace std;

int main()
{
	// 자료형 (크기단위, Byte)
	// 정수형 : cahr(1), short(2), int(4), long(4), long ling(8)
	// 실수형 : float(4), double(8)

	int i;

	//양수만 표현 unsigned
	// 1 바이트로 양수, 음수 둘다 표현.
	// 256 가지 -> 0~255
	unsigned char c = 0;
	c = 0;
	c = -1; // c= 255

	// 1 바이트로 양수, 음수 표현.
	// 256가지 -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = 255; // c = -1

	cout << c << endl;
}

