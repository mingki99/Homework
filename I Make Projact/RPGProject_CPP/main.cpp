#include <iostream>

using namespace std;

// ������ ���� : ���м�

// ��ü ���� (OOP Object Oriented
// ��Ӽ�
// ���м�
// ������

// ������(Polymorphism = Poly + morph) = ���� �Ȱ�����, ����� �ٸ��� �����Ѵ�.
// - �����ε�(Overloading) = �Լ� �ߺ� ���� = �Լ� �̸��� ����
// - �������̵�(Overriding) = ������ = �θ� Ŭ������ �Լ��� �ڽ� Ŭ�������� ������

// ���ε�(Binding) = ���´�
// - ���� ���ε�(Static Binding) : ������ ������ ����
// - ���� ���ε�(Dynamic Binding) : ���� ������ ����.

// �Ϻ� �Լ��� ���� ���ε��� ���
// ���� ���ε��� ���Ѵٸ�? -> �����Լ� (virtual function)

// ���� ��ü�� � Ÿ������ ��� �˰� �˾Ƽ� �����Լ��� ȣ���Ұ�?
// - ���� �Լ� ���̺� (vftable)
// .vftable [] 4Byte[32], 8Byte[64]

// ���� ���� �Լ� : ������ ���� '�������̽�' �� �����ϴ� �뵵�� ����ϰ� �������
// �߻� Ŭ���� : Ŭ������ ���� ���� �Լ��� 1���̻� ���ԵǸ� �߻�Ŭ������ ����
// - ���������� ��ü�� ���� �� ���� ��.


class Player
{
public:
	Player()
	{
		_hp = 100;
	}
	void Move() { cout << "Move Player ! "<< endl; }

	virtual void VMove() { cout << "VMove Player ! " << endl; }
	virtual void VDie() { cout << "VDie Player ! " << endl; }

	virtual void VAttack() = 0;	// ���� ���� �Լ� �̴�.

public:
	int _hp;
};

class Knight : public Player
{
public:
	Knight()
	{
		_stamina = 100;
	}
	void Move() {cout << "Move Knight" <<endl;}
	virtual void VDie() { cout << "VDie Knight ! " << endl; }

	virtual void VAttack() {cout << "VAttack Knight" };


	// ���� �Լ��� �����Ǹ� �ϴ��� �����Լ���.
	virtual void VMove() { cout << "Move Knight ! " << endl; }

public:
	int _stamina;
};

class Mage : public Player
{
public:
	void Move() { cout << "Move Mage" << endl; }

public:
	int _mp;
};

// [ [ Player ] ]
// [   knight   ]

void MovePlayer(Player* player)
{
	player->VMove();
	player->VDie();
}

void MoveKnight(Knight* knight)
{
	knight->Move();
}

int main()
{
	// Player p;			// ���� �����Լ��� �ִ� Ŭ������ ���������� �����Ҽ� ����.
	// MovePlayer(&p);		// �÷��̾�� �÷��̾��? YES
	// MoveKnight((&p);	// �÷��̾�� ����? NO

	Knight k;
	// MoveKnight(&k);		// ���� ����? YES
	MovePlayer(&k);		// ���� �ÿ��̾��? YES

	return 0;
}