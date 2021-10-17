#include "Goblin.h"


Goblin::Goblin()
{
	std::cout << "고블린 생성" << std::endl;
}

Goblin::~Goblin()
{
	std::cout << "고블린 소멸" << std::endl;
}

void Goblin::move()
{
	std::cout << "고블린 이동" << std::endl;
}

void Goblin::runningAway()
{
	std::cout << "고블린 뛰며 도망" << std::endl;
}
