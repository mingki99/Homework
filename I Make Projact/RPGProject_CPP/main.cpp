#include <iostream>

using namespace std;

// 오늘의 주제 : 초기화 리스트

// 멤버 변수 초기화 ? 다양한 문법이 존재

// 초기화 왜 해야할까?
// - 버그 예방
// - 쓰레기 값으로 인해 원하지않는 동작을 실행할 수 있다
// - 포인터 등 주소값이 연루되어 있을 경우

// 초기화 방법
// - 생성자 내에서
// - 초기화 리스트
// - C++11 문법 -> int a = 100;

// 초기화 리스트
// - 상속 관계에서 원하는 부모 생성자 호출할 때 필요하다
// - 생성자 내에서 초기화 vs 초기화 리스트
// -- 일반 변수는 별 차이 없음
// -- 멤버 타입이 클래스인 경우 차이가 난다.
// -- 정의함과 동시에 초기화가 필요한경우 (참조타입, const 타입)

class Inventory
{
public:
	Inventory() {cout << "Inventory() " << endl; }
	Inventory(int size) { cout << "Inventory(int size) " << endl; }

	~Inventory() { cout << "~ Inventory() " << endl; }
};

class Player
{
public:
	Player() {}
	Player(int id) {}
};

// Is - A (Knight Is - A Player? 기사는 플레이어냐 ) OK -> 상속관계
// 
// Has - A (Knight Has - A Inventory? 기사는 인벤토리를 가지고 있냐?) OK -> 포함관계

class Knight : public Player
{
public:
	Knight() : Player(1), _hp(100), _inventory(20), _hpref(_hp), _hpConst(100)	// 초기화 리스트를 사용하게 된다면 선처리 할 때 지정된 값으로 생성된다.
		/*
		선처리 영역

		_inventory = Inventory() 생성자 실행 -> 선처리 영역에서 이런식의 구문으로 생성자를 만들어준다.

		*/
	{
		_hp = 100;

		// _hpref  = _hp;	생성된 이후에 초기화 할 순 없다.
		//_hpConst = 100;	
		
		// 생성자 내부에서 Inventory(int size)를 호출 하고싶었지만 이렇게 하면 생성자가 2개 호출된다.
		// _inventory = Inventory(20);
	}

public:
	int _hp;	// 초기화를 하지 않을시 쓰레기 값이 들어가있다
	Inventory _inventory;	// 인벤토리가 생성자에서 생성될때 같이 생성된다.

	// 정의와 동시에 초기화가 필요하다.
	int& _hpref;
	const int _hpConst;
};


int main()
{
	Knight k;

	cout << k._hp <<endl;	// -858993460 출력

	// -858993460값이 기에 ture가 된다.
	if (k._hp < 0)
	{
		cout << "Knight is Dead" << endl;
	}


	return 0;
}