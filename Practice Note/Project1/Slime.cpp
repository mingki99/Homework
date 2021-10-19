#include "Slime.h"
#include <iostream>

Slime::Slime()
{
	std::cout << "슬라임 생성" << std::endl;
}

Slime::~Slime()
{
	std::cout << "슬라임 파괴" << std::endl;
}

void Slime::Move()
{
	std::cout << "슬라임 이동" << std::endl;
}
