#include "Monster.h"
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
}
