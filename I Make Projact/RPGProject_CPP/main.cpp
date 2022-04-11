#include <iostream>

using namespace std;

// 오늘의 주제 : 객체 지향의 시작

// 데이터 + 가공(로직, 동작)

// 객체지향의 주인공 = 객체

// 객체란? 플레이어, 몬스터, GameRoom

// Knight를 설계해보자.
// - (속성) 데이터 : hp, attack, y, x
// - (기능) 동작 : move(), attack(), die()

// class는 일종의 설계도

class Knight
{
public:
	// 멤버 함수 선언
	void Move(int y, int x);
	void Attack();

	// Class 는 설계도 안에 같이 동작하기에 변수에 접근할수있다
	void Die()
	{
		hp = 0;
		cout<< "Die" << endl;
	}

public:
	// 멤버 변수
	int hp;
	int attack;
	int posY;
	int posX;

};

void Knight::Move(int y, int x)
{
	posY = y;
	posX = x;

	cout << "knight move" << endl;
}

void Knight::Attack()
{
	cout << "Attack!!: "<< attack << endl;
}

void Move(Knight* knight, int y, int x)
{
	knight->posY = y;
	knight->posX = x;
}

// Instantiate 객체를 만든다
int main()
{
	Knight k1;
	k1.hp = 100;
	k1.attack = 10;
	k1.posY = 0;
	k1.posX = 0;

	Knight k2;
	k2.hp = 80;
	k2.attack = 5;
	k2.posY = 1;
	k2.posX = 1;

	Move(&k1, 3, 3);

	k1.Move(2,2);
	k1.Attack();
	k1.Die();

	return 0;
}