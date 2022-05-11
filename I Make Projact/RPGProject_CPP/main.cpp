#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// 오늘의 주제 : override, final

class Player
{
public:
	virtual void Attack()
	{
		cout << "Player !" << endl;
	}
	virtual void Print()
	{
		cout << " Player " <<endl;
	}
};

class Knight : public Player
{
public:
	// 부모함수의 override 했다 라는 표시.
	// Knight class 만 보았을때 virtual만 보게되면 override됬는지 모르기에
	// 가독성 측면에서 override를 붙여준다. ( 부모 함수에서 override했다는 표시 )
	virtual void Attack() override // Player도 똑같은 함수가 있겠구나.
	{
		cout << "Knight !" << endl;
	}

	// 마지막으로 오버라이드 하고 밑에있는 자손 클래스들은 더이상 이 함수를 override 할 수 없다.
	virtual void Print() final
	{
		cout << " Player " << endl;
	}

};




int main()
{
	Knight* k1 = new Knight();

	k1->Attack();

	Player* p1 = new Knight();
	p1->Attack();	// player타입이기에 player함수를 실행한다. ( virtual을 붙이면 RTTI로 인해 knight 함수가 실행된다)

	return 0;
}

