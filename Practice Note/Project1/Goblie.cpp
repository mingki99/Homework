#include "Goblie.h"
#include <iostream>

Goblie::Goblie()
{
	std::cout << "고블린 생성" << std::endl;
}

Goblie::~Goblie()
{
	std::cout << "고블린 파괴" << std::endl;
}

void Goblie::Move()
{
	std::cout << "고블린 이동" << std::endl;
}
