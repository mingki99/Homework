#include <iostream>
using namespace std;

// ������ ���� : �ݹ� (Callback)
// ���ϴ� Ÿ�ֿ̹� �Լ��� ȣ�� �ϴ� ��.


class Player
{
public:

public:
	int _hp;
	int _attack;
	int _numid;
};

class Knight : public Player
{
public:
	
};


class Archer : public Player
{
public:
	
};

// Functor ����
class FunctorGetHp
{
public:
	bool operator () (const Player* player)
	{
		return player->_hp == _hp;
	}

public:
	int _hp;
};

class FunctorGetAttack
{
public:
	bool operator () (const Player* player)
	{
		return player->_attack == _attack;
	}

public:
	int _attack;
};


template<typename T>
Player* FindState(Player players[], const int FindCount, T seleter)
{
	for (int i = 0; i < FindCount + 1; ++i)
	{
		Player* player = &players[i];

		if(seleter(player))
		{ 
			player->_numid = i;	//  ��� °���� ����
			return player;
		}
			
	}
	

}




int main()
{
	const int spawnNum = 5;

	FunctorGetHp FUgetHp;

	// attack�� 10�� ģ���� ã�Ƴ���.
	FunctorGetAttack FUgetAttack;
	FUgetAttack._attack = 10;

	
	
	Knight k[spawnNum];	// ��� ����
	k[3]._attack = 10;
	 
	// ���ǻ���
	// �θ�� �ڽ��� �� �� ����.
	// �ڽ��� �θ� �� �� �ִ�.
	
	// attack�� 10�� knight�� ã�Ƴ� ��� �غ���!
	Player* player = FindState(k, spawnNum, FUgetAttack);

	printf("knight�� %d ��°�� ���ݷ��� : %d �̴�\n",player->_numid,player->_attack);

	// ------------------ archer ���� --------------------

	FUgetHp._hp = 80;

	Archer archer[5];
	archer[4]._hp = 80;
	
	player = FindState(archer, spawnNum,FUgetHp);
	
	printf("Archer�� %d ��°�� ü���� : %d �̴� \n",player->_numid ,player->_hp);

	return 0;
}

