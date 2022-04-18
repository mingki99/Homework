#include <iostream>

using namespace std;

// 오늘의 주제 : 연산자 오버로딩 (Operator Overlodong)

// 연산자 vs 함수
// - 연산자는 피연산자의 개수/타입이 고정되어 있음

// 연산자 오버로딩?
// 일단 [연산자 함수]를 정의해야 함
// 함수도 멤버함수 vs 전역함수가 존재하는것처럼, 연산자 함수도 두가지 방식으로 만들 수 있음

// - 멤버 연산자 함수 version
// -- a op b 형태에서 왼쪽으로 기준으로 싱행됨 (a가 클래스여야 가능, a를 '기준 피연산자' 라고 함)
// -- 한계) a가 클래스가 아니면 사용 못함

// - 전역 연산자 함수 version
// -- a op b 형태라면 a, b 모두를 연산자 함수의 피연산자로 만들어준다.
// -- 한계) 대입연산자 (a = b)는 전역 연산자 version으로 만들지 못한다.

// 이렇게 각자의 한계를 서로 보완 해주기에 어느 한쪽이 좋다 할 수 없다.

// 복사 대입 연산자
// - 복사 생성자, 대입 연산자, 복사 대입 연산자
// - 복사 대입 연산자 = 대입연산자 중, 자기 자신의 참조 타입을 인자로 받는 것

// 기타
// - 모든 연산자르르 다 오버로딩 할 수 있는 것은 아니다 (:: . .* 이런건 안됌)
// - 증감 연산자 ++ --
// -- 전위형 (++a) operator++()
// -- 후위형 (a--) operator++(int)

class Position
{
public:
	Position() {}
	
	Position(const Position& arg)
	{

	}

	
	// 멤버 연산자 함수 1
	Position operator + (const Position& arg)
	{
		
		Position pos;
		pos._x = _x + arg._x;
		pos._y = _y + arg._y;

		return pos;
	}

	// 멤버 연산자 함수 2
	Position operator + (int arg)
	{
		Position pos(2);
		pos._x = _x + arg;
		pos._y = _y + arg;

		return pos;
	}

	// 멤버 연산자 함수 3
	bool operator == (const Position& arg)
	{
		return _x == arg._x && _y == arg._y;
	}


	// 복사생성자, 복사 대입 연산자 등 특별 대우를 받는 이유
	// 말 그대로 객체가 '복사' 되길 원하는 특징 때문
	
	// 멤버 연산자 함수 4
	Position& operator = (Position& arg)
	{
		_x = arg._x;
		_y = arg._y;

		// Position* this = 내 자신의 주소;
		return *this;
	}

	void operator++()
	{
		_x++;
		_y++;
	}

	void operator++(int)
	{
		_x++;
		_y++;
	}


public:
	int _x;
	int _y;
};

// 전역 연산자 함수1
Position operator + (int a, const Position& b)
{
	Position ret(2);

	ret._x = b._x + a;
	ret._y = b._y + a;

	return ret;
}

// 전역 연산자 함수2
// void operator = (const Position& a, int arg)
// {
// 	 a._x = arg;
//	 a._y = arg
// }


int main()
{
	int a = 1;
	int b = 2;

	//대입
	int c = (a=3);

	Position pos(2);
	pos._x = 0;
	pos._y = 0;

	Position pos2(2);
	pos2._x = 1;
	pos2._y = 1;
	

	// 멤버 연산자 함수1 이 동작한다.
	Position pos3 = pos + pos2;

	// 멤버 연산자 함수2 가 동작한다.
	Position pos4 = pos3 +1;
	pos4 = pos3 + 1;	// 이렇게 하여도 멤버 연산자 함수2가 실행된다.

	// 멤버 연산자 함수2는 로만 구현된다면 위치가 다르기에 error를 뱉는다
	// 전역 연산자 함수 1 이 실행된다.
	pos4 = 1 + pos3;

	// 멤버 연산자 함수 3
	bool isSame = (pos3 == pos4);

	Position pos5(2);

	// Position pos5 = 5;	5라는 인자를 받는 생성자를 실행하는겄이기에 X
	
	// 멤버 연산자 함수 4 실행
	// 전역 연산자 함수 2는 똑같은 기능이지만 실행 될수 없다. ( 5 = pos5) 가 성립되기에 문법적으로 막아놓았다.
	// 대입 연산자로 표현되기에 O
	pos5 = 5;

	pos5 = (pos = 5);



	return 0;
}