#include "Monster.h"
<<<<<<< HEAD
#include <iostream>

PMonster::PMonster()
{
    std::cout << "몬스터 대 생성" << std::endl;
}

PMonster::~PMonster()
{
    std::cout << "몬스터 대 파괴" << std::endl;
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
    std::cout << "몬스터 대 이동" << std::endl;
=======


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
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
}
