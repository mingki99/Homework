#include <iostream>
#include <vector>
#include "func.h"

using namespace std;


// ======== Player ==========
int iPlayerType = 0;
int ihp = 0;
int iattack = 0;
int idefence = 0;

// ======== Monster ==========
int iMonsterType;
int iMonsterHP;
int iMonsterAttack;
int iMonsterDefence;


struct Objectinfo
{
	short type;
	int hp;
	char attack;
	int defence;
};
// 2 + 4 + 1 + 4 = XX 11 Bytes XX



int main()
{
	srand(time(0));

	EnterLobby();
	
	
	return 0;
}

void EnterLobby()
{
	while (true)
	{
		cout << "--------------------" << endl;
		cout << "�κ� �����Ͽ����ϴ�!" << endl;
		cout << "--------------------" << endl;

		SelectPlayer();

		cout << "--------------------" << endl;
		cout << "(1) �ʵ� ���� (2) ��������" << endl;
		cout << "--------------------" << endl;
		
		int input = 0;
		cin >> input;

		if (input == 1)
		{
			EnterField();
		}

	}
}

void SelectPlayer()
{
	while (true)
	{
		cout << "--------------------" << endl;
		cout << "������ ����ּ���! (1) ��� ==== (2) �ü� ==== (3) ������" << endl;
		cout << "--------------------" << endl;
		cout << ">";

		cin >> iPlayerType;

		if (iPlayerType == PT_Knight)
		{
			cout << "��� ������..!" << endl;
			ihp = 150;
			iattack = 10;
			idefence = 5;
			break;
		}
		else if (iPlayerType == PT_Archer)
		{
			cout << "�ü� ������..!" << endl;
			ihp = 100;
			iattack = 15;
			idefence = 3;
			break;
		}
		else if (iPlayerType == PT_Mage)
		{
			cout << "���� ������..!" << endl;
			ihp = 80;
			iattack = 25;
			idefence = 0;
			break;
		}
		else
		{
			cout << "������ �ٽ� ����ּ���" << endl;
		}

	}
	
}

void EnterField()
{
	while (true)
	{
		cout << "--------------------" << endl;
		cout << "�ʵ忡 �����Ͽ����ϴ�!" << endl;
		cout << "--------------------" << endl;

		cout << "[Player] HP : " << ihp << " / ATT : " << iattack << " / DEF : " << idefence << endl;

		CreateRandomMonster();


		cout << "--------------------" << endl;
		cout << "(1) ���� ���� (2) ����" << endl;
		cout << "--------------------" << endl;

		int iInput = 0;
		cin >> iInput;

		if (iInput == 1)
		{
			EnterBattle();
			if (0 == ihp)
			{
				cout << "�÷��̾� �ٽ� ������..!" << endl;
				return;
			}
		}
		else
		{
			return;
		}

	}
}

void CreateRandomMonster()
{
	// 1~3
	iMonsterType = 1 + (rand() % 3);

	switch (iMonsterType)
	{
	case MT_Slime:
		cout << "������ ������ ...! (HP:15 / ATT:5 / DEF:0)" << endl;
		iMonsterHP = 15;
		iMonsterAttack = 5;
		iMonsterDefence = 0;
		break;
	case MT_Orc:
		cout << "��ũ ...! (HP:30 / ATT:8 / DEF:3)" << endl;
		iMonsterHP = 30;
		iMonsterAttack = 8;
		iMonsterDefence = 3;
		break;
	case MT_Skeleton:
		cout << "���̷��� ������ ...! (HP:50 / ATT:10 / DEF:5)" << endl;
		iMonsterHP = 50;
		iMonsterAttack = 10;
		iMonsterDefence = 5;
		break;

	}
}

void EnterBattle()
{
	while (true)
	{
		int damage = iattack - iMonsterAttack;
		if (0 > damage)
		{
			damage = 0;
		}

		// ����
		iMonsterHP -= damage;
		if (0 == iMonsterHP)
		{
			cout << "���͸� óġ�߽��ϴ�!" << endl;
			return;
		}

		damage = iMonsterAttack - idefence;
		if (0 > damage)
		{
			damage = 0;
		}

		// �ݰ�
		ihp -= damage;
		if (0 > ihp)
		{
			ihp = 0;
		}

		cout << "�÷��̾� ���� ü�� : " << ihp << endl;
		if ( 0 == ihp)
		{
			cout << "����� �׾����ϴ�." << endl;
			return;
		}



	}
}