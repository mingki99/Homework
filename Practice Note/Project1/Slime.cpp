#include "Slime.h"
<<<<<<< HEAD
#include <iostream>

Slime::Slime()
{
	std::cout << "슬라임 생성" << std::endl;
=======



Slime::Slime()
{
	std::cout << "캐릭터 생성" << std::endl;
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
}

Slime::~Slime()
{
<<<<<<< HEAD
	std::cout << "슬라임 파괴" << std::endl;
}

void Slime::Move()
{
	std::cout << "슬라임 이동" << std::endl;
}
=======
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
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
