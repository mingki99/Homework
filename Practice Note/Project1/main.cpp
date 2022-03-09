#include <iostream>

using namespace std;

// 스택
// { } 중괄호의 범위가 생존 범위

// 연산 우선순위
// 애매하다 보면 괄호를쳐라

// 타입변환
// 자료형 마다 읽는 bit 단위가 다르기에 값이 유실되거나 다른 값이 나오지않게 주의하자

// 사칙연산
// int / int = int 정수형으로 뱉는다
// int / float || float / int = float 상수형으로 뱉음.
// 이런 규칙이 있기에 주의하자

int main()
{
	int hp = 20;
	cout << hp << endl;

	// 짝수 여부
	bool isEven = ((hp % 2) == 0);

	// 짝수거나 3으로 나뉘는 값인지
	bool isEven0rDivBy3 = ((hp%2) == 0||



	return 0;
}

