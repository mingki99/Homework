#include <iostream>

using namespace std;

// 오늘의 주제 : 생성자와 소멸자

// [생성자 (Constructor)와 소멸자(Destructor)]
// 클래스에 '소속' 된 함수들을 멤버 함수라고 함
// 이 중에서 굉장히 특별한 함수 2종이 있는데, 바로 [시작]과 [끝]을 알리는 함수들
// -시작(탄생) -> 생성자 (여러개 존재 가능)
// -끝(소멸) -> 소멸자 (오직 1개만)

// [(암시적(Implicit) 생성자
// 생성자를 명시적으로 만들지 않으면
// 아무 인자도 받지 않는 [기본 생성자]가 컴파일러에 의해 자동으로 만들어진다.
// -> 그러나 우리가 명시적(Explicit)으로 아무 생성자 하나 만들면,
// 자동으로 만들어지던 [기본 생성자]는 더 이상 만들어지지 않는다.

// class는 일종의 설계도

class Knight
{
public:
	
	// [1] 기본 생성자 (인자가 없음)

	Knight()
	{
		cout << "knight() 기본생성자 호출" << endl;
		_hp = 100;
		_attack = 10;
		_posX = 0;
		_posY = 0;

	}

	// [2] 복사 생성자 (자기 자신의 클래스 참조 타입을 인자로 받는다)
	// 일반적으로 '똑같은' 데이터를 지닌 객체가 생성될때 사용

	Knight(const Knight& knight)
	{
		_hp = knight._hp;
		_attack = knight._attack;
		_posX = knight._posX;
		_posY = knight._posY;
	}


	// [3] 기타 생성자
	
	// 이중 인자를 1개만 받는 [기타 생성자]는 [타입 변환 생성자]라고 부른다. 
	 
	// 명시적인 용도로 지정
	 Knight(int hp)
	{
		cout << "Knight() 기본생성자 호출" << endl;

		_hp = hp;
		_attack = 10;
		_posX = 0;
		_posY = 0;

	}

	Knight(int hp, int attack, int posx, int posy)
	{
		_hp = hp;
		_attack = attack ;
		_posY= posx;
		_posX = posy;
	}


	~Knight() 
	{
		cout << "~Knight() 소멸자 호출 " << endl;
	}


	// 멤버 함수 선언
	void Move(int y, int x);
	void Attack();

	// Class 는 설계도 안에 같이 동작하기에 변수에 접근할수있다
	void Die()
	{
		_hp = 0;
		cout<< "Die" << endl;
	}

public:
	// 멤버 변수
	int _hp;
	int _attack;
	int _posY;
	int _posX;

};

void Knight::Move(int y, int x)
{
	_posY = y;
	_posX = x;

	cout << "knight move" << endl;
}

void Knight::Attack()
{
	cout << "Attack!!: "<< _attack << endl;
}

void Move(Knight* knight, int y, int x)
{
	knight->_posY = y;
	knight->_posX = x;
}

void HelloKnight(Knight k)
{

}

// Instantiate 객체를 만든다
int main()
{
	Knight k1;
	// k1._hp = 100;
	k1._attack = 10;
	k1._posY = 0;
	k1._posX = 0;

	Knight k2(k1);

	// 생성을 함과 동시에 복사생성자의 동작을 한다.
	Knight k3 = k1;


	Knight k4;
	k4 = k1;

	k1.Move(2, 2);
	
	// 암시적 형변환 -> 컴파일러가 알아서 계산
	int num = 1;

	float f = (float)num;	// 명시적 << 개발자가 명시적으로 처리
	double d = num;			// 암시적 << 컴파일러가 스스로 처리

	Knight k5;
	k5 = 1;

	HelloKnight(5);

	return 0;
}