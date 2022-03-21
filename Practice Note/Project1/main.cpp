#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

// 배열

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};



int main()
{
	// 배열의 이름은 시작 주소를 뜻한다.
	StatInfo monster[10];


	auto WhoAmI = monster;


	// moster 배열의 1번째의 값을 셋팅
	StatInfo* monster_0 = monster + 1;
	monster_0->hp = 100;
	monster_0->attack = 20;
	monster_0->defence = 2;

	// 포인터와 참조는 자유자재로 변한 가능
	// 포인터로 접근하여 monster의 배열의 2번째에 이름을 지어준것이다.
	StatInfo& monster_2 = *(monster + 2);
	monster_2.hp = 100;
	monster_2.attack = 20;
	monster_2.defence = 2;

	// 완전히 다르니 의미
	// 값을 복사 한것.
	StatInfo temp;
	temp = *(monster + 2);
	temp.hp = 400;
	temp.attack = 40;
	temp.defence = 4;


	// 이런 행위를 자동화
	for (int i = 0; i < 10; ++i)
	{
		StatInfo& monster_2 = *(monster + i);
		monster_2.hp = 100 * (i + 1);
		monster_2.attack = 1 * (i + 1);
		monster_2.defence = 1 * (i + 1);

	}

	return 0;
}

