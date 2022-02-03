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

	// 음의 정수 찾기 (2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다.
	int a = 4 + 4.0;

	// 정수표현 방식과 실수 표현 방식은 다르다
	// 실수 표현방식은 정밀도에 의존한다.
	// 따라서 doble(8) 자료형이 float(4) 보다 더 아래의 소수점까지 정확하게 표현이 가능하다.

	// 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현방식의 피 연산자가 연산될 경우 명시적으로 변환하자

	float f = 10.2415f + (float)20;

	// 실수를 상수로 적을 경우 소수점 뒤에 f 를 붙이면 float 자료형으로 0.1f
	// f 를 붙이지 않으면 double 형으로 보게된다. 0.1 

	int data = 10 + 10;
	//data = data + 20
	data += 20;

	data = (int)(10. / 3.);



	return 0;
}

