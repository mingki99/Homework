#include "Monster.h"
<<<<<<< HEAD
#include <iostream>

PMonster::PMonster()
{
    std::cout << "���� �� ����" << std::endl;
}

PMonster::~PMonster()
{
    std::cout << "���� �� �ı�" << std::endl;
}

int PMonster::HP()
{
    return 0;
}

int PMonster::MP()
{
    return 0;
}

void PMonster::Attec()
{
}

void PMonster::RunningAway()
{
}

void PMonster::Move()
{
    std::cout << "���� �� �̵�" << std::endl;
=======


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
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
}
