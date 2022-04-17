#include <iostream>

using namespace std;

// ������ ���� : �ʱ�ȭ ����Ʈ

// ��� ���� �ʱ�ȭ ? �پ��� ������ ����

// �ʱ�ȭ �� �ؾ��ұ�?
// - ���� ����
// - ������ ������ ���� �������ʴ� ������ ������ �� �ִ�
// - ������ �� �ּҰ��� ����Ǿ� ���� ���

// �ʱ�ȭ ���
// - ������ ������
// - �ʱ�ȭ ����Ʈ
// - C++11 ���� -> int a = 100;

// �ʱ�ȭ ����Ʈ
// - ��� ���迡�� ���ϴ� �θ� ������ ȣ���� �� �ʿ��ϴ�
// - ������ ������ �ʱ�ȭ vs �ʱ�ȭ ����Ʈ
// -- �Ϲ� ������ �� ���� ����
// -- ��� Ÿ���� Ŭ������ ��� ���̰� ����.
// -- �����԰� ���ÿ� �ʱ�ȭ�� �ʿ��Ѱ�� (����Ÿ��, const Ÿ��)

class Inventory
{
public:
	Inventory() {cout << "Inventory() " << endl; }
	Inventory(int size) { cout << "Inventory(int size) " << endl; }

	~Inventory() { cout << "~ Inventory() " << endl; }
};

class Player
{
public:
	Player() {}
	Player(int id) {}
};

// Is - A (Knight Is - A Player? ���� �÷��̾�� ) OK -> ��Ӱ���
// 
// Has - A (Knight Has - A Inventory? ���� �κ��丮�� ������ �ֳ�?) OK -> ���԰���

class Knight : public Player
{
public:
	Knight() : Player(1), _hp(100), _inventory(20), _hpref(_hp), _hpConst(100)	// �ʱ�ȭ ����Ʈ�� ����ϰ� �ȴٸ� ��ó�� �� �� ������ ������ �����ȴ�.
		/*
		��ó�� ����

		_inventory = Inventory() ������ ���� -> ��ó�� �������� �̷����� �������� �����ڸ� ������ش�.

		*/
	{
		_hp = 100;

		// _hpref  = _hp;	������ ���Ŀ� �ʱ�ȭ �� �� ����.
		//_hpConst = 100;	
		
		// ������ ���ο��� Inventory(int size)�� ȣ�� �ϰ�;����� �̷��� �ϸ� �����ڰ� 2�� ȣ��ȴ�.
		// _inventory = Inventory(20);
	}

public:
	int _hp;	// �ʱ�ȭ�� ���� ������ ������ ���� ���ִ�
	Inventory _inventory;	// �κ��丮�� �����ڿ��� �����ɶ� ���� �����ȴ�.

	// ���ǿ� ���ÿ� �ʱ�ȭ�� �ʿ��ϴ�.
	int& _hpref;
	const int _hpConst;
};


int main()
{
	Knight k;

	cout << k._hp <<endl;	// -858993460 ���

	// -858993460���� �⿡ ture�� �ȴ�.
	if (k._hp < 0)
	{
		cout << "Knight is Dead" << endl;
	}


	return 0;
}