#include "Player.h"
#include <iostream>

Player::Player()
{
	std::cout << "플레이어 생성" << std::endl;
}

Player::~Player()
{
	std::cout << "플레이어 파괴" << std::endl;
}

void Player::Gold()
{
}

void Player::Attec()
{
}

void Player::Move()
{
	std::cout << "플레이어 이동" << std::endl;
}
