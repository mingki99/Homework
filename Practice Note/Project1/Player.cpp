#include "Player.h"

using namespace std;


Player::Player()
{
	std::cout << "�÷��̾� ����" << std::endl;
}

Player::~Player()
{
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


