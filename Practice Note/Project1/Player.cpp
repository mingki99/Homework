#include "Player.h"
<<<<<<< HEAD
#include <iostream>
=======

using namespace std;

>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d

Player::Player()
{
	std::cout << "�÷��̾� ����" << std::endl;
}

Player::~Player()
{
<<<<<<< HEAD
	std::cout << "�÷��̾� �ı�" << std::endl;
}

void Player::Gold()
{
}

void Player::Attec()
{
}

void Player::Move()
{
	std::cout << "�÷��̾� �̵�" << std::endl;
}
=======
	std::cout << "�÷��̾� �Ҹ�" << std::endl;
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

	std::cout << "���� ���� " << PlayerGold << " ��� �ֽ��ϴ�." << endl;
	return PlayerGold;
}

int Player::Attack()
{
	int PlayerAttack = 25;

	return PlayerAttack;
}

void Player::move()
{
	std::cout << "�÷��̾� �̵�" << std::endl;
}


>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
