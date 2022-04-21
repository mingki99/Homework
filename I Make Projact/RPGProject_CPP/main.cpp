#include <iostream>

using namespace std;

// 오늘의 주제 : 타입 변환

class Knight
{
public:
	int _hp;
};

class Dog
{
public:
	Dog()
	{

	}

	// 타입 변환 생성자
	// 말도 안되는 생성자 형식이지만 명시적 참고로 인해 넣어봤다.
	Dog(const Knight& knight)	
	{
		_age = knight._hp;
	}

	// 타입 변환 연산자
	operator Knight()	// opertor  = 는 클래스의 자체를 넣어줄겄이기에 이기에 리턴 타입이 없다 .
	{
		return(Knight)(*this);	// 강제 변환 해버린다.
	}

public:
	int _age = 1;
	int _cuteness = 2;
};

class Bulldog : public Dog
{
public:
	
};

int main()
{
	// ---------- 아무런 연관 관계가 없는 클래스 사이의 변환 -----------------

	// [1] 연관없는 클래스 사이의 '값 타입' 변환
	// 특징) 일반적으로 안 됨(예외 : 타입 변환 생성자, 타입 변환 연산자)
	{
		Knight k1;
		Dog dog = (Dog)k1;
		// Knight k2 = dog;

	}

	// [2] 연관없는 클래스 사이의 참조 타입 변환
	// 특징) 명시적으로 가능하다.
	{
		// 어셈블리 : 포인터 = 참조

		Knight Knight;
		
		// [주소] -> [Dog]
		// 주소를 타고 가면 무었이 있는지는 모르기에 참조(주소)를 받는것 까지는 암시적으로 가능하다.
		// 설령 그게 완전히 다른, 연관없는 클래스 였어도!!
		Dog& dog = (Dog&)Knight;	

		// Knight의 변수는 1개(_hp)이다 그러므로 4Btye 이다
		// dog의 변수는 2개 이므로 2번째에 있는 _cuteness를 건드리는 순간 알지 못하는 주소값을 건드리게 된다.
		dog._cuteness = 12;
	}

	// ------------------ 상속 관계에 있는 클래스 사이의 변환 -----------------
	// 
	// 자식 -> 부모 ok
	// 부모 -> 자식 X
	// 
	// [1] 상속 관계 클래스의 값 타입 변환

	{	
		// 어떠한 명시적으로 지정을 해줘도 불가능하다.
		/*Dog dog;
		Bulldog bulldog = (bulldog&)dog;*/ 

		Bulldog bulldog2;	
		Dog dog = bulldog2;	// 자식 -> 부모
	}
	
	// [2] 상속 관계 클래스의 참조 타입 변환
	{
		Dog dog;
		Bulldog& bulldog = (Bulldog&)dog;

		Bulldog bulldog2;
		Dog& dog2 = bulldog2;
	}

	// 결론)
	// [값 타입 변환 ] : 진짜 비트열도 바꾸고 논리적을 말이되게 바꾸는 변한
	// - 논리적으로 말이 된다? (ex.Bulldog -> dog) Ok
	// -
	// [참조 타입 변환] : 비트열은 냅두고 우리의 '관점' 만 바꾸는 변환
	// - 명시적으로 요구하면 실행은 되지만, 그냥 암시적으로 된다면 안전성 여부 연관이 있다.
	// -- 안전하다 ex) Bulldog -> Dog& 암시적으로 OK
	// -- 위험하다 ex) Dog& -> Bulldog 메모리 침범 위험이 있을경우 암시적으로 해주진않는다. (명시적으로 정말 하겠다고 할 수 도있다.)

	return 0;
}