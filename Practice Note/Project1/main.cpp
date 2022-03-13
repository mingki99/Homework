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
		cout << "로비에 입장하엿습니다!" << endl;
		cout << "--------------------" << endl;

		SelectPlayer();

		cout << "--------------------" << endl;
		cout << "(1) 필드 입장 (2) 게임종료" << endl;
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
		cout << "직업을 골라주세요! (1) 기사 ==== (2) 궁수 ==== (3) 마법사" << endl;
		cout << "--------------------" << endl;
		cout << ">";

		cin >> iPlayerType;

		if (iPlayerType == PT_Knight)
		{
			cout << "기사 생성중..!" << endl;
			ihp = 150;
			iattack = 10;
			idefence = 5;
			break;
		}
		else if (iPlayerType == PT_Archer)
		{
			cout << "궁수 생성중..!" << endl;
			ihp = 100;
			iattack = 15;
			idefence = 3;
			break;
		}
		else if (iPlayerType == PT_Mage)
		{
			cout << "법사 생성중..!" << endl;
			ihp = 80;
			iattack = 25;
			idefence = 0;
			break;
		}
		else
		{
			cout << "직업을 다시 골라주세요" << endl;
		}

	}
	
}

void EnterField()
{
	while (true)
	{
		cout << "--------------------" << endl;
		cout << "필드에 입장하엿습니다!" << endl;
		cout << "--------------------" << endl;

		cout << "[Player] HP : " << ihp << " / ATT : " << iattack << " / DEF : " << idefence << endl;

		CreateRandomMonster();


		cout << "--------------------" << endl;
		cout << "(1) 전투 개시 (2) 도망" << endl;
		cout << "--------------------" << endl;

		int iInput = 0;
		cin >> iInput;

		if (iInput == 1)
		{
			EnterBattle();
			if (0 == ihp)
			{
				cout << "플레이어 다시 생성중..!" << endl;
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
		cout << "슬라임 생성증 ...! (HP:15 / ATT:5 / DEF:0)" << endl;
		iMonsterHP = 15;
		iMonsterAttack = 5;
		iMonsterDefence = 0;
		break;
	case MT_Orc:
		cout << "오크 ...! (HP:30 / ATT:8 / DEF:3)" << endl;
		iMonsterHP = 30;
		iMonsterAttack = 8;
		iMonsterDefence = 3;
		break;
	case MT_Skeleton:
		cout << "스켈레톤 생성증 ...! (HP:50 / ATT:10 / DEF:5)" << endl;
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

		// 선빵
		iMonsterHP -= damage;
		if (0 == iMonsterHP)
		{
			cout << "몬스터를 처치했습니다!" << endl;
			return;
		}

		damage = iMonsterAttack - idefence;
		if (0 > damage)
		{
			damage = 0;
		}

		// 반격
		ihp -= damage;
		if (0 > ihp)
		{
			ihp = 0;
		}

		cout << "플레이어 남은 체력 : " << ihp << endl;
		if ( 0 == ihp)
		{
			cout << "당신은 죽었습니다." << endl;
			return;
		}



	}
}