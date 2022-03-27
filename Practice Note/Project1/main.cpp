#include <iostream>
#include <vector>
//#include "func.h"

using namespace std;

// 오늘의 주제 : TextRPG2

// --- EnterLobby (player info)
// --- CreatPlayer
// --- EnterGame (monsterinfo)
// --- CreatMonster
// --- EnterBattle


enum PlaterTpe
{
	PT_Knight = 1,
	PT_Archer = 2,
	PT_Mage = 3,

};

enum MonsterType
{
	MT_Slime = 1,
	MT_Orc = 2,
	MT_Skeleton = 3,
};


struct StatInfo
{
	int hp = 0;
	int attack = 0;
	int defence = 0;
};

void EnterLobby();
void PrintMessage(const char* msg);
void CreatPlayer(StatInfo* playerInfo);
void PrintStatInfo(const char* name, const StatInfo& info);
void EnterGame(StatInfo* playerinfo);
void CreatMonsters(StatInfo monsterInfo[], int count);
bool EnterBattle(StatInfo* playerinfo, StatInfo* monsterinfo);


int main()
{
	srand((unsigned)time(nullptr));
	EnterLobby();
	return 0;
}

void EnterLobby()
{
	while (true)
	{
		PrintMessage("로비에 입장하였습니다.");


		// Player 선언!
		StatInfo playerInfo;
		CreatPlayer(&playerInfo);
		PrintStatInfo("Player", playerInfo);

		EnterGame(&playerInfo);
	}
}

void PrintMessage(const char* msg)
{
	cout << "************************" << endl;
	cout << msg << endl;
	cout << "************************" << endl;

}

void CreatPlayer(StatInfo* playerInfo)
{

	bool ready = false;
	while (ready == false)
	{
		PrintMessage("캐릭터 생성창");
		PrintMessage("[1] 기사 [2] 궁수 [3] 법사");
		cout << " > ";

		int input;

		cin >> input;

		switch (input)
		{
		case PT_Knight:
			playerInfo->hp = 100;
			playerInfo->attack = 10;
			playerInfo->defence = 5;
			ready = true;
			break;
		case PT_Archer:
			playerInfo->hp = 85;
			playerInfo->attack = 15;
			playerInfo->defence = 3;
			ready = true;
			break;
		case PT_Mage:
			playerInfo->hp = 50;
			playerInfo->attack = 25;
			playerInfo->defence = 5;
			ready = true;
			break;

		default:
			break;
		}

	}
}



void PrintStatInfo(const char* name, const StatInfo& info)
{
	cout << "**********************" << endl;
	cout << name << "  : HP = " << info.hp << "  : ATT = " << info.attack << "  : DEF = " << info.defence << endl;
}

void EnterGame(StatInfo* playerinfo)
{
	const int MONSTER_COUNT = 2;

	PrintMessage("게임에 입장했습니다.");

	while (true)
	{
		StatInfo monsterInfo[MONSTER_COUNT];
		CreatMonsters(monsterInfo, MONSTER_COUNT);

		for (int i = 0; i < MONSTER_COUNT; ++i)
		{
			PrintStatInfo("Monster", monsterInfo[i]);
		}

		PrintStatInfo("player", *playerinfo);

		PrintMessage("[1] 전투  [2] 전투  [3] 도망");

		int input;
		cin >> input;

		if (input == 1 || input == 2)
		{
			int index = input - 1;
			bool vectory = EnterBattle(playerinfo, &(monsterInfo[index]));
		
			if (vectory == false)
			{
				break;
			}
		
		}

	}
}


void CreatMonsters(StatInfo monsterInfo[], int count)
{
	for (int i = 0; i < count; ++i)
	{
		int randValue = 1 + rand() % 3;

		switch (randValue)
		{
		case MT_Slime:
			monsterInfo[i].hp = 30;
			monsterInfo[i].attack = 5;
			monsterInfo[i].defence = 1;
			break;

		case MT_Orc:
			monsterInfo[i].hp = 50;
			monsterInfo[i].attack = 8;
			monsterInfo[i].defence = 2;
			break;
		case MT_Skeleton:
			monsterInfo[i].hp = 65;
			monsterInfo[i].attack = 12;
			monsterInfo[i].defence = 5;
			break;
		default:
			break;
		}
	}
}


bool EnterBattle(StatInfo* playerinfo, StatInfo* monsterinfo)
{
	while (true)
	{
		int damage = playerinfo->attack - monsterinfo->defence;
		if (damage < 0)
			damage = 0;

		monsterinfo->hp -= damage;

		PrintStatInfo("Monster", *monsterinfo);

		if (monsterinfo->hp <= 0)
		{
			PrintMessage("몬스터를 처치했습니다.");
			return true;
		}

		damage = monsterinfo->attack - playerinfo->defence;
		if (damage < 0)
			damage = 0;

		playerinfo->hp -= damage;
		if (playerinfo->hp < 0)
			playerinfo->hp = 0;

		PrintStatInfo("Player", *playerinfo);

		if (playerinfo->hp <= 0)
		{
			PrintMessage("Player 가 죽었습니다.");
			return false;
		}




	}
}
