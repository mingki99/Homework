#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

// �迭

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};



int main()
{
	// �迭�� �̸��� ���� �ּҸ� ���Ѵ�.
	StatInfo monster[10];


	auto WhoAmI = monster;


	// moster �迭�� 1��°�� ���� ����
	StatInfo* monster_0 = monster + 1;
	monster_0->hp = 100;
	monster_0->attack = 20;
	monster_0->defence = 2;

	// �����Ϳ� ������ ��������� ���� ����
	// �����ͷ� �����Ͽ� monster�� �迭�� 2��°�� �̸��� �����ذ��̴�.
	StatInfo& monster_2 = *(monster + 2);
	monster_2.hp = 100;
	monster_2.attack = 20;
	monster_2.defence = 2;

	// ������ �ٸ��� �ǹ�
	// ���� ���� �Ѱ�.
	StatInfo temp;
	temp = *(monster + 2);
	temp.hp = 400;
	temp.attack = 40;
	temp.defence = 4;


	// �̷� ������ �ڵ�ȭ
	for (int i = 0; i < 10; ++i)
	{
		StatInfo& monster_2 = *(monster + i);
		monster_2.hp = 100 * (i + 1);
		monster_2.attack = 1 * (i + 1);
		monster_2.defence = 1 * (i + 1);

	}

	return 0;
}

