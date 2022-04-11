#include <iostream>

using namespace std;

// ������ ���� : ��ü ������ ����

// ������ + ����(����, ����)

// ��ü������ ���ΰ� = ��ü

// ��ü��? �÷��̾�, ����, GameRoom

// Knight�� �����غ���.
// - (�Ӽ�) ������ : hp, attack, y, x
// - (���) ���� : move(), attack(), die()

// class�� ������ ���赵

class Knight
{
public:
	// ��� �Լ� ����
	void Move(int y, int x);
	void Attack();

	// Class �� ���赵 �ȿ� ���� �����ϱ⿡ ������ �����Ҽ��ִ�
	void Die()
	{
		hp = 0;
		cout<< "Die" << endl;
	}

public:
	// ��� ����
	int hp;
	int attack;
	int posY;
	int posX;

};

void Knight::Move(int y, int x)
{
	posY = y;
	posX = x;

	cout << "knight move" << endl;
}

void Knight::Attack()
{
	cout << "Attack!!: "<< attack << endl;
}

void Move(Knight* knight, int y, int x)
{
	knight->posY = y;
	knight->posX = x;
}

// Instantiate ��ü�� �����
int main()
{
	Knight k1;
	k1.hp = 100;
	k1.attack = 10;
	k1.posY = 0;
	k1.posX = 0;

	Knight k2;
	k2.hp = 80;
	k2.attack = 5;
	k2.posY = 1;
	k2.posX = 1;

	Move(&k1, 3, 3);

	k1.Move(2,2);
	k1.Attack();
	k1.Die();

	return 0;
}