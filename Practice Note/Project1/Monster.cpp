#include "Monster.h"


Monster::Monster()
{
	std::cout << "몬스터 생성" << std::endl;

}

Monster::~Monster()
{
	std::cout << "몬스터 소멸" << std::endl;
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
	std::cout << "몬스터 이동" << std::endl;
}
