#include <iostream>

//#define HUNGRY  1
//#define THIRSTY 2
//#define TIRED   4 //비트 자리 단위 이기에 4

#define HUNGRY  0x001
#define THIRSTY 0x002
#define TIRED   0x004
#define FIRE	0x008

#define COLD	0x010
#define POISON  0x020
#define POISON  0x040
#define POISON  0x080

#define POISON  0x100
#define POISON  0x200
#define POISON  0x400
#define POISON  0x800


// 장점 가독성


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


	// 연산자
	// 대입연산자, =

	//산술 연산자
	// +, -, *, /, &(모듈러스, 나머지 피연사자가 모두 정수)
	// ++. -- (증감 연산자)
	// 한 '단계' 증가 또는 감소

	int data = 10 + 10;
	//data = data + 20
	data += 20;

	data = (int)(10. / 3.);

	// ++, -- 다음 '단계' 로 넘어간다
	// 피연사자의 의해서 '단계' 의 개념이 달라진다.

	data = 0;
	++data; // 전위(전치)
	data++; // 후위(후치)
	// 후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀린다.

	data = 0;

	a = 10;
	data = a++; // 가장 마지막에 실행되니. data 의 값은 10 이된다.


	data--;
	data--;

	// 논리 연산자
	// !(역), &&(곱), ||(합)
	// 참(ture), 거짓(false)
	// 참   : 0 이 아닌 값, 주로 1
	// 거짓 : 0
	bool turefalse = false;

	true;
	false;

	bool IsTrue = 100;

	IsTrue = true;
	IsTrue = !IsTrue;

	int iTrue = 100;
	iTrue = !iTrue;

	iTrue = 0 && 200;
	iTrue = 1 || 0;

	// 비교 연산자
	// ==, !=, <, <=, >,  >=


	// 구문
	// if, else

	data = 0;
	if (0 && 200)
	{
		data = 100;
	}

	if (data == 100)
	{
		// if 가 참이면 수형
	}
	else
	{
		// if 기 거짓인 경우 수행
	}


	switch (10)
	{
	case 10:
		break;

	case 20:
		break;

	default:
		break;
	}

	int iTest = 30;
	if (iTest == 10 || iTest == 20 || iTest == 30)

	// 연산순서
	//	true
	//	1. iTest == 10 (F) || iTest == 20 (F)
	//	2. F || F || iTest == 30 (T)
	//	3. true!!
	{

	}
	else if (iTest == 20)
	{

	}
	else
	{

	}


	// switch, case

	// 삼항 연산자
	// :?
	// 가독성이 떨어질수있다.
	// 특별히 한줄로 쓸려고할때? 굳이 사용하지않음.

	iTest == 20 ? iTest = 100 : iTest = 200;

	if (iTest == 20)
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}


	// 비트 연산자
	// 쉬프트 << >>
	// 비트가 한자리 올라간다는것은 2배 (2진수니깐)

	unsigned char byte = 13;

	byte <<= 3; // 2^n 배수
	byte >>= 1; // 2^n 나눈 몫

	// 비트 곱(&), 합(|), xor(^), 반전(~)
	// 비트단위로 연산을 진행,
	// & 둘다 1 인경우 1
	// | 둘중 하나라도 1이면 1
	// ^ 같으면 0, 다르면 1


	int iStatus = 0;

	// 상태 추가
	// 비트 단위의 자리에 상태를 넣는다.
	iStatus |= HUNGRY;  // 00000001 = 1 
	iStatus |= THIRSTY; // 00000010 = 2
	iStatus |= TIRED;   // 00000100 = 4

	// 상태 확인
	if (iStatus & THIRSTY)
	{

	}

	// 특정 자리 비트 제거
	iStatus &= ~THIRSTY;



	return 0;
}

