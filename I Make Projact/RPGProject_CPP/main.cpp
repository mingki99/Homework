#include <iostream>
using namespace std;

// 오늘의 주제 : 콜백 (Callback)
// 원하는 타이밍에 함수를 호출 하는 것.


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

// Functor 생성
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
			player->_numid = i;	//  몇번 째인지 저장
			return player;
		}
			
	}
	

}




int main()
{
	const int spawnNum = 5;

	FunctorGetHp FUgetHp;

	// attack이 10인 친구를 찾아낸다.
	FunctorGetAttack FUgetAttack;
	FUgetAttack._attack = 10;

	
	
	Knight k[spawnNum];	// 기사 생성
	k[3]._attack = 10;
	 
	// 유의사항
	// 부모는 자식이 될 수 없다.
	// 자식은 부모가 될 수 있다.
	
	// attack이 10인 knight를 찾아내 출력 해보자!
	Player* player = FindState(k, spawnNum, FUgetAttack);

	printf("knight의 %d 번째의 공격력은 : %d 이다\n",player->_numid,player->_attack);

	// ------------------ archer 생성 --------------------

	FUgetHp._hp = 80;

	Archer archer[5];
	archer[4]._hp = 80;
	
	player = FindState(archer, spawnNum,FUgetHp);
	
	printf("Archer의 %d 번째의 체력은 : %d 이다 \n",player->_numid ,player->_hp);

	return 0;
}

