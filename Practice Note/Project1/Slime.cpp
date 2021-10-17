#include "Slime.h"



Slime::Slime()
{
	std::cout << "캐릭터 생성" << std::endl;
}

Slime::~Slime()
{
	std::cout << "슬라임 소멸" << std::endl;
}

int Slime::HP()
{
	int HP = 100;

	return HP;
}

int Slime::MP()
{
	return 0;
}

int Slime::Attack()
{
	int SlimeAttack = 5;
	return SlimeAttack;
}

void Slime::move()
{
	std::cout << "슬라임 이동" << std::endl;
}

void Slime::runningAway()
{
	std::cout << "슬라임 통통 튀며 도망 " << std::endl;
}
