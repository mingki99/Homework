#include <iostream>

using namespace std;

// 오늘의 주제 : 은닉성

// 객체 지향 (OOP Object Oriented
// 상속성
// 은닉성
// 다형성

// 다형성(Polymorphism = Poly + morph) = 겉은 똑같은데, 기능이 다르게 동작한다.
// - 오버로딩(Overloading) = 함수 중복 정의 = 함수 이름의 재사용
// - 오버라이딩(Overriding) = 재정의 = 부모 클래스의 함수를 자식 클래스에서 재정의

// 바인딩(Binding) = 묶는다
// - 정적 바인딩(Static Binding) : 컴파일 시점에 결정
// - 동적 바인딩(Dynamic Binding) : 실행 시점에 결정.

// 일부 함수는 정적 바인딩을 사용
// 동적 바인딩을 원한다면? -> 가상함수 (virtual function)

// 실제 객체가 어떤 타입인지 어떻게 알고 알아서 가상함수를 호출할가?
// - 가상 함수 테이블 (vftable)
// .vftable [] 4Byte[32], 8Byte[64]

// 순수 가상 함수 : 구현은 없고 '인터페이스' 만 전달하는 용도로 사용하고 싶은경우
// 추상 클래스 : 클래스에 순수 가상 함수가 1개이상 포함되면 추상클래스로 간주
// - 직접적으로 객체를 만들 수 없게 됨.


class Player
{
public:
	Player()
	{
		_hp = 100;
	}
	void Move() { cout << "Move Player ! "<< endl; }

	virtual void VMove() { cout << "VMove Player ! " << endl; }
	virtual void VDie() { cout << "VDie Player ! " << endl; }

	virtual void VAttack() = 0;	// 순수 가상 함수 이다.

public:
	int _hp;
};

class Knight : public Player
{
public:
	Knight()
	{
		_stamina = 100;
	}
	void Move() {cout << "Move Knight" <<endl;}
	virtual void VDie() { cout << "VDie Knight ! " << endl; }

	virtual void VAttack() {cout << "VAttack Knight" };


	// 가상 함수는 재정의를 하더라도 가상함수다.
	virtual void VMove() { cout << "Move Knight ! " << endl; }

public:
	int _stamina;
};

class Mage : public Player
{
public:
	void Move() { cout << "Move Mage" << endl; }

public:
	int _mp;
};

// [ [ Player ] ]
// [   knight   ]

void MovePlayer(Player* player)
{
	player->VMove();
	player->VDie();
}

void MoveKnight(Knight* knight)
{
	knight->Move();
}

int main()
{
	// Player p;			// 순수 가상함수가 있는 클래스는 독립적으로 존재할수 없다.
	// MovePlayer(&p);		// 플레이어는 플레이어다? YES
	// MoveKnight((&p);	// 플레이어는 기사다? NO

	Knight k;
	// MoveKnight(&k);		// 기사는 기사다? YES
	MovePlayer(&k);		// 기사는 플에이어다? YES

	return 0;
}