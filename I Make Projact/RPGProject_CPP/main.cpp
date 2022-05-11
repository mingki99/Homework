#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// ������ ���� : override, final

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
	// �θ��Լ��� override �ߴ� ��� ǥ��.
	// Knight class �� �������� virtual�� ���ԵǸ� override����� �𸣱⿡
	// ������ ���鿡�� override�� �ٿ��ش�. ( �θ� �Լ����� override�ߴٴ� ǥ�� )
	virtual void Attack() override // Player�� �Ȱ��� �Լ��� �ְڱ���.
	{
		cout << "Knight !" << endl;
	}

	// ���������� �������̵� �ϰ� �ؿ��ִ� �ڼ� Ŭ�������� ���̻� �� �Լ��� override �� �� ����.
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
	p1->Attack();	// playerŸ���̱⿡ player�Լ��� �����Ѵ�. ( virtual�� ���̸� RTTI�� ���� knight �Լ��� ����ȴ�)

	return 0;
}

