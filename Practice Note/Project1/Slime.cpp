#include "Slime.h"



Slime::Slime()
{
	std::cout << "ĳ���� ����" << std::endl;
}

Slime::~Slime()
{
	std::cout << "������ �Ҹ�" << std::endl;
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
	std::cout << "������ �̵�" << std::endl;
}

void Slime::runningAway()
{
	std::cout << "������ ���� Ƣ�� ���� " << std::endl;
}
