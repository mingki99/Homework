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
	Dog(const Knight& knight)
	{
		_age = knight._hp;
	}

	// 타입 변환 연산자
	operator Knight()	// 리턴 타입이 없음 클래의 자체에 모든의미가 있으니까!
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
	// --------------- 타입 변환 유형 (비트열 재구성 여부) ----------------

	// [1] 값 타입 변환
	// 특징) 의미를 유지하기 위해서, 원본 객체와 다른 비트열 재구성

	{
		int a = 123456789;	// 2의보수
		float b = (float)a;	// 부동소수점(지수 + 유효숫자)

		cout << b <<endl;

	}

	//	[2] 참조 타입 변환
	// 특징) 비트열을 재구성하지 않고. '관점'만 바꾸는 것
	// 거의 쓸일은 없지만, 포인터 타입 변환도 '참조 타입변환' 동일한 룰을 따른다
	{
		int a = 123456789;	// 2의보수
		float b = (float&)a;	// 부동소수점(지수 + 유효숫자)

		cout << b << endl;
	}

	// --------- 안전도 분류 -----------
	
	// [1] 안전한 변환
	// 특징) 의미가 항상 100% 완전히 일치하는 경우
	// 작은 타입 -> 큰 타입 ok (업 캐스팅)
	// ex)  short -> int, int-> _int 64

	{
		char c = 10;
		short s = c;
		int i = s;
		long long dl = i;

		cout << i <<endl;
	}

	// [2] 불안전한 변환
	// 특징) 의미가 항상 100% 일치한다고 보장하지 못하는 경우
	// 타입이 다르거나
	// 같은 타입이지만 큰 바구니 -> 작은 바구니 이동(다운캐스팅)
	{
		int a = 123456789;
		float b = a;
		short c = a;
		cout << b << endl;
	
	}

	// ----------------- 프로그래머 의도에 따라 분류 ------------------

	// [1] 암시적 변환
	// 특징) 이미 알려진 타입 변환 규칙에 따라서 컴파일러 '자동'으로 타입 변환
	{
		int a = 123456789;
		float b = a;
		
		cout << b << endl;
		
	}
	
	// [2] 명시적변환 
	{
		int a = 123456789;
		int* b = (int*)a;	// 이거 인트 주소야~ 라고 명시적 형변환을 해줬다.

		cout << b << endl;

	}

	// ---------- 아무런 연관 관계가 없는 클래스 사이의 변환 -----------------

	// [1] 연관없는 클래스 사이의 '값 타입' 변환
	// 특징) 일반적으로 안 됨(예외 : 타입 변환 생성자, 타입 변환 연산자)
	{
		Knight k1;
		Dog dog = (Dog)k1;
		Knight k2 = dog;

	}

	// [2] 연관없는 클래스 사이의 참조 타입 변환
	// 특징)
	{
		Knight Knight;
		
		// 주소 -> Dog
		Dog& dog = (Dog&)Knight;	// 주소영역과
		dog._cuteness = 12;
	}

	// ------------------ 상속 관계에 있는 클래스 사이의 변환 -----------------
	// 
	// 자식 -> 부모 ok
	// 부모 -> 자식 X
	// 
	// [1] 상속 관계 클래스의 값 타입 변환

	{
		/*Dog dog;
		Bulldog bulldog = (bulldog&)dog;*/

		Bulldog bulldog2;
		// Dog dog = bulldog2;
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