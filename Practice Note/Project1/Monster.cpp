#include "Monster.h"
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
}
