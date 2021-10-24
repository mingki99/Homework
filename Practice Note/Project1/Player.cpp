#include "Player.h"
<<<<<<< HEAD
#include <iostream>
=======

using namespace std;

>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d

Player::Player()
{
	std::cout << "플레이어 생성" << std::endl;
}

Player::~Player()
{
<<<<<<< HEAD
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
=======
	std::cout << "플레이어 소멸" << std::endl;
}

int Player::HP()
{
	int PlayerHP = 200;

	return PlayerHP;
}

int Player::MP()
{
	return 0;
}

int Player::Gold()
{
	int PlayerGold ;

	std::cout << "현재 골드는 " << PlayerGold << " 골드 있습니다." << endl;
	return PlayerGold;
}

int Player::Attack()
{
	int PlayerAttack = 25;

	return PlayerAttack;
}

void Player::move()
{
	std::cout << "플레이어 이동" << std::endl;
}


>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
