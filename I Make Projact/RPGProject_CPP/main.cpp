#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// 오늘의 주제 : 오른값(rvalue) 참조와 std::move

// 복사는 비싸지만 이동시키는 것은 더 효율이 좋다

class Pet
{

};

class Knight
{
public:
	Knight()
	{
		cout << "Knight" << endl;
	}

	Knight(const Knight& knight)
	{
		cout << "const Knight" <<endl;
	}

	// 이동생성자
	Knight(Knight&&)
	{

	}

	~Knight()
	{
		if(_pet)
			delete _pet;
	}

	void operator=(const Knight& knight)
	{
		cout << "operator = (const Knight&)" <<endl;

		// 깊은 복사
		// 독립적인 객체가 생성되는것에 장점이 있지만 복사는 비싸다.
		_hp = knight._hp;

		if (knight._pet)
			_pet = new Pet(*knight._pet);
	}

	// 이동 대입 연산자
	void operator=(Knight&& knight) noexcept
	{
		cout << "operator = (const Knight&)" << endl;

		// 깊은 복사
		// 독립적인 객체가 생성되는것에 장점이 있지만 복사는 비싸다.
		_hp = knight._hp;

		_pet = knight._pet;

		// Pet이 소멸 되었을때 delete할 거기에 nullptr을 사용한다.
		knight._pet = nullptr;
	}

public:
	void Const_PrintInfo() const {}
	void PrintInfo() {}
public:
	int _hp = 100;
	Pet* _pet = nullptr;
};

void TestKnight_Copy(Knight knight)
{
	knight._hp = 100;	// 다른 kngiht에 값을 바꾸는 행위
}


// 마음대로 사용해!
void TestKnight_LvalueRef(Knight& knight)
{
	knight._hp = 100;	// 원본에도 값이 적용된다.
}

// 읽기용으로만 사용한다.
// 그러므로 knight의 const키워드만 붙은 함수만 사용할 수 있다.
void TestKnight_ConstLvalueRef(const Knight& knight)
{
	knight.Const_PrintInfo();  // const가 붙은 함수만 접근가능
	// knight.PrintInfo()         error 접근 불가능
}

// 오른값 참조를 사용한다.
// 읽고쓰고 값을 바꿔도 되지만 이 원본도 아무렇게나 사용해
void TestKnight_RvalueRef(Knight&& knight) // 이동대상
{
	// knight._hp = 100;	접근 불가
}


int main()
{
	// 왼값(lvalue) vs 오른값(rvalue)
	// - lvalue : 단일식을 넘어서 계속 지속되는 개체
	// - rvalue : lvalue가 아닌 나머지 (임시 갑스 열거형, 람다, I++)

	int a = 3;
	// 왼  오
	// 3 = a

	Knight k1;

	TestKnight_Copy(k1);

	TestKnight_LvalueRef(k1);

	// TestKnight_LvalueRef(Knight());	const 참조는 lvalue가 되야한다는 error를 뱉는다

	// 문법적으로 const는 값이 수정이 불가능하니 오른값으로 사용할 수 있다 
	TestKnight_ConstLvalueRef(Knight());	// 임시적으로 Knight

	TestKnight_RvalueRef(Knight());

	TestKnight_RvalueRef(static_cast<Knight&&>(k1));


	Knight k2;
	k2._pet = new Pet();
	k2._hp = 1000;

	Knight k3;

	// 뺏어오는 개념
	k3 = static_cast<Knight&&>(k2);	// 원본은 날려도 된다라는 뜻

	k3 = std::move(k2);	// 오른값 참조로 캐스팅

	// 딱 하나만 존재하는 포인터로 만들고 싶을때 unique_ptr을 사용한다
	std::unique_ptr<Knight> uptr = std::make_unique<Knight>();
	std::unique_ptr<Knight> uptr2 = std::move(uptr);	// uptr2에 모든값을 넘겨주고 uptr2에는 텅 비어있다.

	return 0;
}

