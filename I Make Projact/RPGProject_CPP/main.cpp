#include <iostream>

using namespace std;

// 오늘의 주제 : 객체지향 마무리

// 1) struct vs class

// C++에서는 strut나 calss나 종이 한 장 차이다.
// struct는 기본 접근 지정자가 public이고, class는 parivate이다.
// 왜 이렇게 했을까? C에서 파생되어 발전했기 떄문에, 호환성을 지키기 위함
// -> struct는 그냥 구조체 (데이터 묶음)을 표현하는 용도
// -> struct


struct TestStruct
{

};


class TestClass
{
public:

};

// 2) static 변수, static 함수 (staic = 정적 = 고정된)
// 클래스를 대표하는 변수와 함수.

class Marine
{
public:
	void TakeDamage(int damage)
	{
		_hp -= damage;
	}

	static void TEST()
	{
		// 클래스 안에있는 일종의 전역함수 이기에 _hp는 어떤 Marine의 _hp를 건들건지 명시적이지 못 한다.
		// _hp = 100	
	}

public:

	int _hp;
	static int s_attack;	// 완전 다른 메모리에 잡혀있다. 설계도 상으로만 존재
};

// static 변수는 어떤 메모리?
// 초기화 하면 .data
// 초기화 안하면 .bss

int Marine::s_attack = 0;

int Generateld()
{
	// 생명주기 : 프로그램 시작 / 종료 (메모리에 항상 올라가 있음)
	// 가시범위 : 
	
	// 정적 지역 객체
	// 변수의 초기화는 함수의 호출로 인해 딱 한번 실행되며 변수가 프로그램 끝날때 까지 변수는 살아있다.
	static int s_id = 1;	

	return s_id++;
}

int main()
{
	Marine m1;
	m1._hp = 35;
	m1.TakeDamage(10);
	

	Marine::s_attack = 6;
	// m1.s_attack = 6;

	Marine m2;
	m2._hp = 40;
	m2.s_attack = 6;

	// 마린 공격력 업그레이드 완료! (Academy 업그레이드 끝)
	m1.s_attack = 7;
	m2.s_attack = 7;

	// 스택 아님 .data 영역
	static int id = 10;
	int a = id;

	return 0;
}