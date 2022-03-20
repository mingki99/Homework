#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

// 참조

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

// [매개변수] [RET] [지역변수(info) ] [매개변수(&info)] [RET] [지역변수]
void CreateMonster(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;

}

// 포인터가 없다면 복사가 이뤄진다.
// [매개변수] [RET] [지역변수(info) ] [매개변수(info(100, 8, 5))] [RET] [지역변수]
void CreateMonster(StatInfo info)
{
	info.hp = 100;
	info.attack = 8;
	info.defence = 5;

}

// 값을 수정하지 않는다면, 양쪽 다 일단 문제 없음

// 1) 값 전달 방식

void PrintInfoByCopy(StatInfo info)
{
	cout << "===============" << endl;
	cout << "HP: " << info.hp << endl;
	cout << "attack: " << info.attack << endl;
	cout << "defence: " << info.defence << endl;
}

// 2) 주소 전달방식

void PrintInfoByPtr(StatInfo* info)
{
	cout << "===============" << endl;
	cout << "HP: " << info->hp << endl;
	cout << "attack: " << info->attack << endl;
	cout << "defence: " << info->defence << endl;
}

// 3) 참조 전달방식

void PrintInfoByRet(StatInfo& info)
{
	cout << "===============" << endl;
	cout << "HP: " << info.hp << endl;
	cout << "attack: " << info.attack << endl;
	cout << "defence: " << info.defence << endl;
}

// StatInfo 구조체가 1000 버아투 짜리 대형 구조체라면?
// - (값전달) 구조체 1000Byte를 통째로 복사.
// - (주소전달) 구조체* 는 64 = 8Byte, 32 = 4Byte
// - (참조전달) 구조체& 는 64 = 8Byte, 32 = 4Byte

// 값 전달처럼 편리하게 사용
// 주소 전달처럼 주소값을 이용하여 

int main()
{
	// 4바이트 정수형 자료형 사용
	// 이름을 number 
	// number 에서 뭘 꺼내거나, 넣는다면
	// 해당 주소 (data, stack, heap) 에 1 을 넣어줘라
	int number = 1;

	// * 주소를 담는다
	// int 그 바구니를 따락면 int 데이터(바구니) 있음
	int* pointer = &number;
	// pointer int 자료형에 있는 주소를 타고 이동해서, 그 주소에 2를 넣는다.
	*pointer = 2;

	// 로우레벨(에섬블리) 관점에서 실제 작동 방식은 int* 와 똑같음
	// 포인터와 같은 기능을한다.
	int& reference = number;
	reference = 3;

	// 또 다른 이름을 짓는 이유는?
	// 
	StatInfo info;

	PrintInfoByCopy(info);
	PrintInfoByPtr(&info);
	PrintInfoByRet(info);

	


	return 0;
}

