#include <iostream>

using namespace std;

// ������ ���� : �����ڿ� �Ҹ���

// [������ (Constructor)�� �Ҹ���(Destructor)]
// Ŭ������ '�Ҽ�' �� �Լ����� ��� �Լ���� ��
// �� �߿��� ������ Ư���� �Լ� 2���� �ִµ�, �ٷ� [����]�� [��]�� �˸��� �Լ���
// -����(ź��) -> ������ (������ ���� ����)
// -��(�Ҹ�) -> �Ҹ��� (���� 1����)

// [(�Ͻ���(Implicit) ������
// �����ڸ� ��������� ������ ������
// �ƹ� ���ڵ� ���� �ʴ� [�⺻ ������]�� �����Ϸ��� ���� �ڵ����� ���������.
// -> �׷��� �츮�� �����(Explicit)���� �ƹ� ������ �ϳ� �����,
// �ڵ����� ��������� [�⺻ ������]�� �� �̻� ��������� �ʴ´�.

// class�� ������ ���赵

class Knight
{
public:
	
	// [1] �⺻ ������ (���ڰ� ����)

	Knight()
	{
		cout << "knight() �⺻������ ȣ��" << endl;
		_hp = 100;
		_attack = 10;
		_posX = 0;
		_posY = 0;

	}

	// [2] ���� ������ (�ڱ� �ڽ��� Ŭ���� ���� Ÿ���� ���ڷ� �޴´�)
	// �Ϲ������� '�Ȱ���' �����͸� ���� ��ü�� �����ɶ� ���

	Knight(const Knight& knight)
	{
		_hp = knight._hp;
		_attack = knight._attack;
		_posX = knight._posX;
		_posY = knight._posY;
	}


	// [3] ��Ÿ ������
	
	// ���� ���ڸ� 1���� �޴� [��Ÿ ������]�� [Ÿ�� ��ȯ ������]��� �θ���. 
	 
	// ������� �뵵�� ����
	 Knight(int hp)
	{
		cout << "Knight() �⺻������ ȣ��" << endl;

		_hp = hp;
		_attack = 10;
		_posX = 0;
		_posY = 0;

	}

	Knight(int hp, int attack, int posx, int posy)
	{
		_hp = hp;
		_attack = attack ;
		_posY= posx;
		_posX = posy;
	}


	~Knight() 
	{
		cout << "~Knight() �Ҹ��� ȣ�� " << endl;
	}


	// ��� �Լ� ����
	void Move(int y, int x);
	void Attack();

	// Class �� ���赵 �ȿ� ���� �����ϱ⿡ ������ �����Ҽ��ִ�
	void Die()
	{
		_hp = 0;
		cout<< "Die" << endl;
	}

public:
	// ��� ����
	int _hp;
	int _attack;
	int _posY;
	int _posX;

};

void Knight::Move(int y, int x)
{
	_posY = y;
	_posX = x;

	cout << "knight move" << endl;
}

void Knight::Attack()
{
	cout << "Attack!!: "<< _attack << endl;
}

void Move(Knight* knight, int y, int x)
{
	knight->_posY = y;
	knight->_posX = x;
}

void HelloKnight(Knight k)
{

}

// Instantiate ��ü�� �����
int main()
{
	Knight k1;
	// k1._hp = 100;
	k1._attack = 10;
	k1._posY = 0;
	k1._posX = 0;

	Knight k2(k1);

	// ������ �԰� ���ÿ� ����������� ������ �Ѵ�.
	Knight k3 = k1;


	Knight k4;
	k4 = k1;

	k1.Move(2, 2);
	
	// �Ͻ��� ����ȯ -> �����Ϸ��� �˾Ƽ� ���
	int num = 1;

	float f = (float)num;	// ����� << �����ڰ� ��������� ó��
	double d = num;			// �Ͻ��� << �����Ϸ��� ������ ó��

	Knight k5;
	k5 = 1;

	HelloKnight(5);

	return 0;
}