#include "Monster.h"


Monster::Monster()
{
	std::cout << "���� ����" << std::endl;

}

Monster::~Monster()
{
	std::cout << "���� �Ҹ�" << std::endl;
}

int Monster::HP()
{
	return 0;
}

int Monster::MP()
{
	return 0;
}

int Monster::Attack()
{
	return 0;
}

void Monster::move()
{
	std::cout << "���� �̵�" << std::endl;
}
