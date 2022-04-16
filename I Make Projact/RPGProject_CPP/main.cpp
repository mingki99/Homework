#include <iostream>

using namespace std;

class Player
{
public:
	// 일반 함수
	void Move() { cout << "Move Player [일반함수 호출]! " << endl; }

	// 가상함수
	virtual void VDie() { cout << "VDie Player [가상함수 호출] ! " << endl; };
};

class Knight : public Player
{
public:
	// 일반 함수
	void Move() { cout << "Move Knight [일반함수 호출] ! " << endl; }
	// 가상 함수
	virtual void VDie() { cout << "VDie Knight [가상함수 호출] ! " << endl; }
};

// 기사도 플에이어 이기에 플레이어 안에있는 함수 실행
void MovePlayer(Player* player)
{	
	// calss player의 함수 실행

	player->Move();	// 일반 함수
	player->VDie(); // 가상함수
}
int main()
{
	Knight k;
	MovePlayer(&k);		// 기사는 플레이어 인가? YES

	return 0;
}